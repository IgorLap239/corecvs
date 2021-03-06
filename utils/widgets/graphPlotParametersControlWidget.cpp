/**
 * \file graphPlotParametersControlWidget.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "graphPlotParametersControlWidget.h"
#include "ui_graphPlotParametersControlWidget.h"
#include <memory>
#include "visitors/qSettingsGetter.h"
#include "visitors/qSettingsSetter.h"


GraphPlotParametersControlWidget::GraphPlotParametersControlWidget(QWidget *parent, bool _autoInit, QString _rootPath)
    : ParametersControlWidgetBase(parent)
    , mUi(new Ui::GraphPlotParametersControlWidget)
    , autoInit(_autoInit)
    , rootPath(_rootPath)
{
    mUi->setupUi(this);

mUi->yScaleSlider->setMaxZoom(1000);

    QObject::connect(mUi->graphStyleComboBox, SIGNAL(currentIndexChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->widthSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->centerAtSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->xGridCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->yGridCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->xScaleSlider, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->yScaleSlider, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->contrastSpinBox, SIGNAL(valueChanged(double)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->selectGraphCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->fixTimeValueButton, SIGNAL(clicked(bool)), this, SIGNAL(paramsChanged()));
    QObject::connect(mUi->fixGridValueButton, SIGNAL(clicked(bool)), this, SIGNAL(paramsChanged()));
}

GraphPlotParametersControlWidget::~GraphPlotParametersControlWidget()
{

    delete mUi;
}

void GraphPlotParametersControlWidget::loadParamWidget(WidgetLoader &loader)
{
    std::unique_ptr<GraphPlotParameters> params(createParameters());
    loader.loadParameters(*params, rootPath);
    setParameters(*params);
}

void GraphPlotParametersControlWidget::saveParamWidget(WidgetSaver  &saver)
{
    saver.saveParameters(*std::unique_ptr<GraphPlotParameters>(createParameters()), rootPath);
}

void GraphPlotParametersControlWidget::getParameters(GraphPlotParameters& params) const
{
    params = *std::unique_ptr<GraphPlotParameters>(createParameters());
}


GraphPlotParameters *GraphPlotParametersControlWidget::createParameters() const
{

    /**
     * We should think of returning parameters by value or saving them in a preallocated place
     **/


    return new GraphPlotParameters(
          static_cast<GraphStyle::GraphStyle>(mUi->graphStyleComboBox->currentIndex())
        , mUi->widthSpinBox->value()
        , mUi->centerAtSpinBox->value()
        , mUi->xGridCheckBox->isChecked()
        , mUi->yGridCheckBox->isChecked()
        , mUi->xScaleSlider->value()
        , mUi->yScaleSlider->value()
        , mUi->contrastSpinBox->value()
        , mUi->selectGraphCheckBox->isChecked()
        , mUi->fixTimeValueButton->isChecked()
        , mUi->fixGridValueButton->isChecked()
    );
}

void GraphPlotParametersControlWidget::setParameters(const GraphPlotParameters &input)
{
    // Block signals to send them all at once
    bool wasBlocked = blockSignals(true);
    mUi->graphStyleComboBox->setCurrentIndex(input.graphStyle());
    mUi->widthSpinBox->setValue(input.width());
    mUi->centerAtSpinBox->setValue(input.centerAt());
    mUi->xGridCheckBox->setChecked(input.xGrid());
    mUi->yGridCheckBox->setChecked(input.yGrid());
    mUi->xScaleSlider->setValue(input.xScale());
    mUi->yScaleSlider->setValue(input.yScale());
    mUi->contrastSpinBox->setValue(input.contrast());
    mUi->selectGraphCheckBox->setChecked(input.selectGraph());
    mUi->fixTimeValueButton->setChecked(input.fixTimeValue());
    mUi->fixGridValueButton->setChecked(input.fixGridValue());
    blockSignals(wasBlocked);
    emit paramsChanged();
}

void GraphPlotParametersControlWidget::setParametersVirtual(void *input)
{
    // Modify widget parameters from outside
    GraphPlotParameters *inputCasted = static_cast<GraphPlotParameters *>(input);
    setParameters(*inputCasted);
}
