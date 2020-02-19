#ifndef OPENCV_SQUARE_DETECTOR_PARAMETERS_H_
#define OPENCV_SQUARE_DETECTOR_PARAMETERS_H_
/**
 * \file openCVSquareDetectorParameters.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from opencv.xml
 */

#include "reflection/reflection.h"
#include "reflection/defaultSetter.h"
#include "reflection/printerVisitor.h"

/*
 *  Embed includes.
 */
/*
 *  Additional includes for Composite Types.
 */

// using namespace corecvs;

/*
 *  Additional includes for Pointer Types.
 */

// namespace corecvs {
// }
/*
 *  Additional includes for enum section.
 */

/**
 * \brief OpenCV Square Detector Parameters 
 * OpenCV Square Detector Parameters 
 **/
class OpenCVSquareDetectorParameters : public corecvs::BaseReflection<OpenCVSquareDetectorParameters>
{
public:
    enum FieldId {
        DEBUG_ID,
        TRESHHOLDLEVEL_ID,
        CANNYTHRESHOLD1_ID,
        CANNYTHRESHOLD2_ID,
        CANNYAPPERTURE_ID,
        MAXCOSINETHRESHOLD_ID,
        OPENCV_SQUARE_DETECTOR_PARAMETERS_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief debug 
     * debug 
     */
    bool mDebug;

    /** 
     * \brief treshholdLevel 
     * treshholdLevel 
     */
    int mTreshholdLevel;

    /** 
     * \brief cannyThreshold1 
     * cannyThreshold1 
     */
    int mCannyThreshold1;

    /** 
     * \brief cannyThreshold2 
     * cannyThreshold2 
     */
    int mCannyThreshold2;

    /** 
     * \brief cannyApperture 
     * cannyApperture 
     */
    int mCannyApperture;

    /** 
     * \brief maxCosineThreshold 
     * maxCosineThreshold 
     */
    double mMaxCosineThreshold;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit(corecvs::Reflection *toFill);

    static int relinkCompositeFields();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    bool debug() const
    {
        return mDebug;
    }

    int treshholdLevel() const
    {
        return mTreshholdLevel;
    }

    int cannyThreshold1() const
    {
        return mCannyThreshold1;
    }

    int cannyThreshold2() const
    {
        return mCannyThreshold2;
    }

    int cannyApperture() const
    {
        return mCannyApperture;
    }

    double maxCosineThreshold() const
    {
        return mMaxCosineThreshold;
    }

    /** Section with setters */
    void setDebug(bool debug)
    {
        mDebug = debug;
    }

    void setTreshholdLevel(int treshholdLevel)
    {
        mTreshholdLevel = treshholdLevel;
    }

    void setCannyThreshold1(int cannyThreshold1)
    {
        mCannyThreshold1 = cannyThreshold1;
    }

    void setCannyThreshold2(int cannyThreshold2)
    {
        mCannyThreshold2 = cannyThreshold2;
    }

    void setCannyApperture(int cannyApperture)
    {
        mCannyApperture = cannyApperture;
    }

    void setMaxCosineThreshold(double maxCosineThreshold)
    {
        mMaxCosineThreshold = maxCosineThreshold;
    }

    /** Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mDebug,                     static_cast<const corecvs::BoolField *>(fields()[DEBUG_ID]));
        visitor.visit(mTreshholdLevel,            static_cast<const corecvs::IntField *>(fields()[TRESHHOLDLEVEL_ID]));
        visitor.visit(mCannyThreshold1,           static_cast<const corecvs::IntField *>(fields()[CANNYTHRESHOLD1_ID]));
        visitor.visit(mCannyThreshold2,           static_cast<const corecvs::IntField *>(fields()[CANNYTHRESHOLD2_ID]));
        visitor.visit(mCannyApperture,            static_cast<const corecvs::IntField *>(fields()[CANNYAPPERTURE_ID]));
        visitor.visit(mMaxCosineThreshold,        static_cast<const corecvs::DoubleField *>(fields()[MAXCOSINETHRESHOLD_ID]));
    }

    OpenCVSquareDetectorParameters()
    {
        corecvs::DefaultSetter setter;
        accept(setter);
    }

    OpenCVSquareDetectorParameters(
          bool debug
        , int treshholdLevel
        , int cannyThreshold1
        , int cannyThreshold2
        , int cannyApperture
        , double maxCosineThreshold
    )
    {
        mDebug = debug;
        mTreshholdLevel = treshholdLevel;
        mCannyThreshold1 = cannyThreshold1;
        mCannyThreshold2 = cannyThreshold2;
        mCannyApperture = cannyApperture;
        mMaxCosineThreshold = maxCosineThreshold;
    }

    /** Exact match comparator **/ 
    bool operator ==(const OpenCVSquareDetectorParameters &other) const 
    {
        if ( !(this->mDebug == other.mDebug)) return false;
        if ( !(this->mTreshholdLevel == other.mTreshholdLevel)) return false;
        if ( !(this->mCannyThreshold1 == other.mCannyThreshold1)) return false;
        if ( !(this->mCannyThreshold2 == other.mCannyThreshold2)) return false;
        if ( !(this->mCannyApperture == other.mCannyApperture)) return false;
        if ( !(this->mMaxCosineThreshold == other.mMaxCosineThreshold)) return false;
        return true;
    }
    friend std::ostream& operator << (std::ostream &out, OpenCVSquareDetectorParameters &toSave)
    {
        corecvs::PrinterVisitor printer(out);
        toSave.accept<corecvs::PrinterVisitor>(printer);
        return out;
    }

    void print ()
    {
        std::cout << *this;
    }
};
#endif  //OPENCV_SQUARE_DETECTOR_PARAMETERS_H_
