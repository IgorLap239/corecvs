/**
 * \file maskingParametersControlWidget.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "maskingParametersControlWidget.h"
#include "ui_maskingParametersControlWidget.h"
#include <memory>
#include "visitors/qSettingsGetter.h"
#include "visitors/qSettingsSetter.h"


MaskingParametersControlWidget::MaskingParametersControlWidget(QWidget *parent, bool _autoInit, QString _rootPath)
    : FilterParametersControlWidgetBase(parent)
    , mUi(new Ui::MaskingParametersControlWidget)
    , autoInit(_autoInit)
    , rootPath(_rootPath)
{
    mUi->setupUi(this);

    QObject::connect(mUi->invertCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(paramsChanged()));
}

MaskingParametersControlWidget::~MaskingParametersControlWidget()
{

    delete mUi;
}

void MaskingParametersControlWidget::loadParamWidget(WidgetLoader &loader)
{
    std::unique_ptr<MaskingParameters> params(createParameters());
    loader.loadParameters(*params, rootPath);
    setParameters(*params);
}

void MaskingParametersControlWidget::saveParamWidget(WidgetSaver  &saver)
{
    saver.saveParameters(*std::unique_ptr<MaskingParameters>(createParameters()), rootPath);
}

void MaskingParametersControlWidget::getParameters(MaskingParameters& params) const
{
    params = *std::unique_ptr<MaskingParameters>(createParameters());
}


MaskingParameters *MaskingParametersControlWidget::createParameters() const
{

    /**
     * We should think of returning parameters by value or saving them in a preallocated place
     **/


    return new MaskingParameters(
          mUi->invertCheckBox->isChecked()
    );
}

void MaskingParametersControlWidget::setParameters(const MaskingParameters &input)
{
    // Block signals to send them all at once
    bool wasBlocked = blockSignals(true);
    mUi->invertCheckBox->setChecked(input.invert());
    blockSignals(wasBlocked);
    emit paramsChanged();
}

void MaskingParametersControlWidget::setParametersVirtual(void *input)
{
    // Modify widget parameters from outside
    MaskingParameters *inputCasted = static_cast<MaskingParameters *>(input);
    setParameters(*inputCasted);
}
