/**
 * \file inputFilterParametersControlWidget.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include "inputFilterParametersControlWidget.h"
#include "ui_inputFilterParametersControlWidget.h"
#include <memory>
#include "visitors/qSettingsGetter.h"
#include "visitors/qSettingsSetter.h"


InputFilterParametersControlWidget::InputFilterParametersControlWidget(QWidget *parent, bool _autoInit, QString _rootPath)
    : FilterParametersControlWidgetBase(parent)
    , mUi(new Ui::InputFilterParametersControlWidget)
    , autoInit(_autoInit)
    , rootPath(_rootPath)
{
    mUi->setupUi(this);

    QObject::connect(mUi->inputTypeComboBox, SIGNAL(currentIndexChanged(int)), this, SIGNAL(paramsChanged()));
}

InputFilterParametersControlWidget::~InputFilterParametersControlWidget()
{

    delete mUi;
}

void InputFilterParametersControlWidget::loadParamWidget(WidgetLoader &loader)
{
    std::unique_ptr<InputFilterParameters> params(createParameters());
    loader.loadParameters(*params, rootPath);
    setParameters(*params);
}

void InputFilterParametersControlWidget::saveParamWidget(WidgetSaver  &saver)
{
    saver.saveParameters(*std::unique_ptr<InputFilterParameters>(createParameters()), rootPath);
}

void InputFilterParametersControlWidget::getParameters(InputFilterParameters& params) const
{
    params = *std::unique_ptr<InputFilterParameters>(createParameters());
}


InputFilterParameters *InputFilterParametersControlWidget::createParameters() const
{

    /**
     * We should think of returning parameters by value or saving them in a preallocated place
     **/


    return new InputFilterParameters(
          static_cast<InputType::InputType>(mUi->inputTypeComboBox->currentIndex())
    );
}

void InputFilterParametersControlWidget::setParameters(const InputFilterParameters &input)
{
    // Block signals to send them all at once
    bool wasBlocked = blockSignals(true);
    mUi->inputTypeComboBox->setCurrentIndex(input.inputType());
    blockSignals(wasBlocked);
    emit paramsChanged();
}

void InputFilterParametersControlWidget::setParametersVirtual(void *input)
{
    // Modify widget parameters from outside
    InputFilterParameters *inputCasted = static_cast<InputFilterParameters *>(input);
    setParameters(*inputCasted);
}
