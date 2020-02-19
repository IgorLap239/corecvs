/**
 * \file thickeningParametersControlWidget.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "thickeningParametersControlWidget.h"
#include "ui_thickeningParametersControlWidget.h"
#include <memory>
#include "visitors/qSettingsGetter.h"
#include "visitors/qSettingsSetter.h"


ThickeningParametersControlWidget::ThickeningParametersControlWidget(QWidget *parent, bool _autoInit, QString _rootPath)
    : FilterParametersControlWidgetBase(parent)
    , mUi(new Ui::ThickeningParametersControlWidget)
    , autoInit(_autoInit)
    , rootPath(_rootPath)
{
    mUi->setupUi(this);

    QObject::connect(mUi->powerSpinBox, SIGNAL(valueChanged(int)), this, SIGNAL(paramsChanged()));
}

ThickeningParametersControlWidget::~ThickeningParametersControlWidget()
{

    delete mUi;
}

void ThickeningParametersControlWidget::loadParamWidget(WidgetLoader &loader)
{
    std::unique_ptr<ThickeningParameters> params(createParameters());
    loader.loadParameters(*params, rootPath);
    setParameters(*params);
}

void ThickeningParametersControlWidget::saveParamWidget(WidgetSaver  &saver)
{
    saver.saveParameters(*std::unique_ptr<ThickeningParameters>(createParameters()), rootPath);
}

void ThickeningParametersControlWidget::getParameters(ThickeningParameters& params) const
{
    params = *std::unique_ptr<ThickeningParameters>(createParameters());
}


ThickeningParameters *ThickeningParametersControlWidget::createParameters() const
{

    /**
     * We should think of returning parameters by value or saving them in a preallocated place
     **/


    return new ThickeningParameters(
          mUi->powerSpinBox->value()
    );
}

void ThickeningParametersControlWidget::setParameters(const ThickeningParameters &input)
{
    // Block signals to send them all at once
    bool wasBlocked = blockSignals(true);
    mUi->powerSpinBox->setValue(input.power());
    blockSignals(wasBlocked);
    emit paramsChanged();
}

void ThickeningParametersControlWidget::setParametersVirtual(void *input)
{
    // Modify widget parameters from outside
    ThickeningParameters *inputCasted = static_cast<ThickeningParameters *>(input);
    setParameters(*inputCasted);
}
