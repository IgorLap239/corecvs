#ifndef FOCUS_ESTIMATION_PARAMETERS_H_
#define FOCUS_ESTIMATION_PARAMETERS_H_
/**
 * \file focusEstimationParameters.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from parameters.xml
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
 * \brief Focus Estimation Parameters 
 * Focus Estimation Parameters 
 **/
class FocusEstimationParameters : public corecvs::BaseReflection<FocusEstimationParameters>
{
public:
    enum FieldId {
        JUNCTIONCOEF_ID,
        CENTER_COEF_ID,
        PRODUCE_DEBUG_ID,
        COMPUTE_NOISE_ID,
        COMPUTE_OLD_STATS_ID,
        EDGE_THRESHOLD_ID,
        FOCUS_ESTIMATION_PARAMETERS_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief JunctionCoef 
     * JunctionCoef 
     */
    double mJunctionCoef;

    /** 
     * \brief Center Coef 
     * Center Coef 
     */
    double mCenterCoef;

    /** 
     * \brief Produce Debug 
     * Produce Debug 
     */
    bool mProduceDebug;

    /** 
     * \brief Compute Noise 
     * Compute Noise 
     */
    bool mComputeNoise;

    /** 
     * \brief Compute Old Stats 
     * Compute Old Stats 
     */
    bool mComputeOldStats;

    /** 
     * \brief edge Threshold 
     * edge Threshold 
     */
    int mEdgeThreshold;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit(corecvs::Reflection *toFill);

    static int relinkCompositeFields();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    double junctionCoef() const
    {
        return mJunctionCoef;
    }

    double centerCoef() const
    {
        return mCenterCoef;
    }

    bool produceDebug() const
    {
        return mProduceDebug;
    }

    bool computeNoise() const
    {
        return mComputeNoise;
    }

    bool computeOldStats() const
    {
        return mComputeOldStats;
    }

    int edgeThreshold() const
    {
        return mEdgeThreshold;
    }

    /** Section with setters */
    void setJunctionCoef(double junctionCoef)
    {
        mJunctionCoef = junctionCoef;
    }

    void setCenterCoef(double centerCoef)
    {
        mCenterCoef = centerCoef;
    }

    void setProduceDebug(bool produceDebug)
    {
        mProduceDebug = produceDebug;
    }

    void setComputeNoise(bool computeNoise)
    {
        mComputeNoise = computeNoise;
    }

    void setComputeOldStats(bool computeOldStats)
    {
        mComputeOldStats = computeOldStats;
    }

    void setEdgeThreshold(int edgeThreshold)
    {
        mEdgeThreshold = edgeThreshold;
    }

    /** Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mJunctionCoef,              static_cast<const corecvs::DoubleField *>(fields()[JUNCTIONCOEF_ID]));
        visitor.visit(mCenterCoef,                static_cast<const corecvs::DoubleField *>(fields()[CENTER_COEF_ID]));
        visitor.visit(mProduceDebug,              static_cast<const corecvs::BoolField *>(fields()[PRODUCE_DEBUG_ID]));
        visitor.visit(mComputeNoise,              static_cast<const corecvs::BoolField *>(fields()[COMPUTE_NOISE_ID]));
        visitor.visit(mComputeOldStats,           static_cast<const corecvs::BoolField *>(fields()[COMPUTE_OLD_STATS_ID]));
        visitor.visit(mEdgeThreshold,             static_cast<const corecvs::IntField *>(fields()[EDGE_THRESHOLD_ID]));
    }

    FocusEstimationParameters()
    {
        corecvs::DefaultSetter setter;
        accept(setter);
    }

    FocusEstimationParameters(
          double junctionCoef
        , double centerCoef
        , bool produceDebug
        , bool computeNoise
        , bool computeOldStats
        , int edgeThreshold
    )
    {
        mJunctionCoef = junctionCoef;
        mCenterCoef = centerCoef;
        mProduceDebug = produceDebug;
        mComputeNoise = computeNoise;
        mComputeOldStats = computeOldStats;
        mEdgeThreshold = edgeThreshold;
    }

    /** Exact match comparator **/ 
    bool operator ==(const FocusEstimationParameters &other) const 
    {
        if ( !(this->mJunctionCoef == other.mJunctionCoef)) return false;
        if ( !(this->mCenterCoef == other.mCenterCoef)) return false;
        if ( !(this->mProduceDebug == other.mProduceDebug)) return false;
        if ( !(this->mComputeNoise == other.mComputeNoise)) return false;
        if ( !(this->mComputeOldStats == other.mComputeOldStats)) return false;
        if ( !(this->mEdgeThreshold == other.mEdgeThreshold)) return false;
        return true;
    }
    friend std::ostream& operator << (std::ostream &out, FocusEstimationParameters &toSave)
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
#endif  //FOCUS_ESTIMATION_PARAMETERS_H_
