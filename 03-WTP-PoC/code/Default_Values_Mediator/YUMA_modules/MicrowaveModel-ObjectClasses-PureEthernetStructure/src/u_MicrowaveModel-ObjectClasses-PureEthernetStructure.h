
#ifndef _H_u_MicrowaveModel_ObjectClasses_PureEthernetStructure
#define _H_u_MicrowaveModel_ObjectClasses_PureEthernetStructure
/* 
 * Copyright (c) 2008-2012, Andy Bierman, All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.5-5

    User SIL header
    module MicrowaveModel-ObjectClasses-PureEthernetStructure
    revision 2016-09-02
    namespace uri:onf:MicrowaveModel-ObjectClasses-PureEthernetStructure
    organization ONF (Open Networking Foundation) Open Transport Working Group - Wireless Transport Project

 */

#include <xmlstring.h>

#include "agt.h"
#include "agt_cb.h"
#include "dlq.h"
#include "ncxtypes.h"
#include "op.h"
#include "rpc.h"
#include "ses.h"
#include "status.h"
#include "val.h"
#include "y_MicrowaveModel-ObjectClasses-PureEthernetStructure.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Feature MicrowaveModel-ObjectClasses-PureEthernetStructure:pure-ethernet
 * Comment out to disable */
#define u_MicrowaveModel_ObjectClasses_PureEthernetStructure_F_pure_ethernet 1



/* container /MW_PureEthernetStructure_Pac/pureEthernetStructureCapability */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCapability_ {
    xmlChar *structureId;
    xmlChar *supportedAlarms;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCapability;

/* list /MW_PureEthernetStructure_Pac/pureEthernetStructureConfiguration/problemKindSeverityList */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList_ {
    dlq_hdr_t qhdr;
    xmlChar *problemKindName;
    xmlChar *problemKindSeverity;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList;

/* container /MW_PureEthernetStructure_Pac/pureEthernetStructureConfiguration */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_ {
    dlq_hdr_t problemKindSeverityList;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration;

/* container /MW_PureEthernetStructure_Pac/pureEthernetStructureStatus/segmentStatusList */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_segmentStatusList_ {
    int16 segmentStatusTypeId;
    boolean segmentIsReservedForTdm;
    xmlChar *operationalStatus;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_segmentStatusList;

/* container /MW_PureEthernetStructure_Pac/pureEthernetStructureStatus */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_ {
    y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_segmentStatusList segmentStatusList;
    xmlChar *lastStatusChange;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus;

/* list /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentProblems/currentProblemList */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_ {
    dlq_hdr_t qhdr;
    int32 sequenceNumber;
    xmlChar *timeStamp;
    xmlChar *problemName;
    xmlChar *problemSeverity;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList;

/* container /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentProblems */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_ {
    dlq_hdr_t currentProblemList;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems;

/* list /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance/currentPerformanceDataList */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_ {
    dlq_hdr_t qhdr;
    xmlChar *objectClass;
    xmlChar *nameBinding;
    xmlChar *scannerId;
    xmlChar *granularityPeriod;
    xmlChar *administrativeState;
    boolean suspectIntervalFlag;
    int32 elapsedTime;
    xmlChar *timestamp;
    int32 performanceData;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList;

/* container /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_ {
    dlq_hdr_t currentPerformanceDataList;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance;

/* list /MW_PureEthernetStructure_Pac/pureEthernetStructureHistoricalPerformances/historicalPerformanceDataList */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_ {
    dlq_hdr_t qhdr;
    xmlChar *objectClass;
    xmlChar *nameBinding;
    xmlChar *historyDataId;
    xmlChar *periodEndTime;
    xmlChar *granularityPeriod;
    boolean suspectIntervalFlag;
    int32 performanceData;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList;

/* container /MW_PureEthernetStructure_Pac/pureEthernetStructureHistoricalPerformances */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_ {
    dlq_hdr_t historicalPerformanceDataList;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances;

/* list /MW_PureEthernetStructure_Pac */
typedef struct y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_ {
    dlq_hdr_t qhdr;
    xmlChar *layerProtocol;
    y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCapability pureEthernetStructureCapability;
    y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration pureEthernetStructureConfiguration;
    y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus pureEthernetStructureStatus;
    y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems pureEthernetStructureCurrentProblems;
    y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance pureEthernetStructureCurrentPerformance;
    y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances pureEthernetStructureHistoricalPerformances;
} y_MicrowaveModel_ObjectClasses_PureEthernetStructure_T_MW_PureEthernetStructure_Pac;

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_layerProtocol_edit
* 
* Edit database object callback
* Path: /MW_PureEthernetStructure_Pac/layerProtocol
* Add object instrumentation in COMMIT phase.
* 
* INPUTS:
*     see agt/agt_cb.h for details
*     k_ parameters are ancestor list key values.
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_layerProtocol_edit (
    ses_cb_t *scb,
    rpc_msg_t *msg,
    agt_cbtyp_t cbtyp,
    op_editop_t editop,
    val_value_t *newval,
    val_value_t *curval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCapability_structureId_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCapability/structureId
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCapability_structureId_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCapability_supportedAlarms_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCapability/supportedAlarms
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCapability_supportedAlarms_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol);


/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList_problemKindName_edit
* 
* Edit database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureConfiguration/problemKindSeverityList/problemKindName
* Add object instrumentation in COMMIT phase.
* 
* INPUTS:
*     see agt/agt_cb.h for details
*     k_ parameters are ancestor list key values.
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList_problemKindName_edit (
    ses_cb_t *scb,
    rpc_msg_t *msg,
    agt_cbtyp_t cbtyp,
    op_editop_t editop,
    val_value_t *newval,
    val_value_t *curval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList_problemKindName);


/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList_problemKindSeverity_edit
* 
* Edit database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureConfiguration/problemKindSeverityList/problemKindSeverity
* Add object instrumentation in COMMIT phase.
* 
* INPUTS:
*     see agt/agt_cb.h for details
*     k_ parameters are ancestor list key values.
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList_problemKindSeverity_edit (
    ses_cb_t *scb,
    rpc_msg_t *msg,
    agt_cbtyp_t cbtyp,
    op_editop_t editop,
    val_value_t *newval,
    val_value_t *curval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList_problemKindName);


/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList_edit
* 
* Edit database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureConfiguration/problemKindSeverityList
* Add object instrumentation in COMMIT phase.
* 
* INPUTS:
*     see agt/agt_cb.h for details
*     k_ parameters are ancestor list key values.
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList_edit (
    ses_cb_t *scb,
    rpc_msg_t *msg,
    agt_cbtyp_t cbtyp,
    op_editop_t editop,
    val_value_t *newval,
    val_value_t *curval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_problemKindSeverityList_problemKindName);


/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_edit
* 
* Edit database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureConfiguration
* Add object instrumentation in COMMIT phase.
* 
* INPUTS:
*     see agt/agt_cb.h for details
*     k_ parameters are ancestor list key values.
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureConfiguration_edit (
    ses_cb_t *scb,
    rpc_msg_t *msg,
    agt_cbtyp_t cbtyp,
    op_editop_t editop,
    val_value_t *newval,
    val_value_t *curval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_segmentStatusList_segmentStatusTypeId_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureStatus/segmentStatusList/segmentStatusTypeId
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_segmentStatusList_segmentStatusTypeId_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_segmentStatusList_segmentIsReservedForTdm_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureStatus/segmentStatusList/segmentIsReservedForTdm
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_segmentStatusList_segmentIsReservedForTdm_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_segmentStatusList_operationalStatus_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureStatus/segmentStatusList/operationalStatus
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_segmentStatusList_operationalStatus_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_lastStatusChange_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureStatus/lastStatusChange
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureStatus_lastStatusChange_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_sequenceNumber_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentProblems/currentProblemList/sequenceNumber
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_sequenceNumber_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    int32 k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_sequenceNumber);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_timeStamp_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentProblems/currentProblemList/timeStamp
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_timeStamp_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    int32 k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_sequenceNumber);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_problemName_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentProblems/currentProblemList/problemName
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_problemName_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    int32 k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_sequenceNumber);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_problemSeverity_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentProblems/currentProblemList/problemSeverity
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_problemSeverity_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    int32 k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentProblems_currentProblemList_sequenceNumber);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_objectClass_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance/currentPerformanceDataList/objectClass
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_objectClass_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_nameBinding_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance/currentPerformanceDataList/nameBinding
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_nameBinding_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance/currentPerformanceDataList/scannerId
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_granularityPeriod_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance/currentPerformanceDataList/granularityPeriod
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_granularityPeriod_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_administrativeState_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance/currentPerformanceDataList/administrativeState
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_administrativeState_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_suspectIntervalFlag_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance/currentPerformanceDataList/suspectIntervalFlag
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_suspectIntervalFlag_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_elapsedTime_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance/currentPerformanceDataList/elapsedTime
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_elapsedTime_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_timestamp_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance/currentPerformanceDataList/timestamp
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_timestamp_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_performanceData_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureCurrentPerformance/currentPerformanceDataList/performanceData
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_performanceData_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureCurrentPerformance_currentPerformanceDataList_scannerId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_objectClass_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureHistoricalPerformances/historicalPerformanceDataList/objectClass
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_objectClass_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_historyDataId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_nameBinding_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureHistoricalPerformances/historicalPerformanceDataList/nameBinding
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_nameBinding_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_historyDataId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_historyDataId_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureHistoricalPerformances/historicalPerformanceDataList/historyDataId
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_historyDataId_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_historyDataId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_periodEndTime_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureHistoricalPerformances/historicalPerformanceDataList/periodEndTime
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_periodEndTime_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_historyDataId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_granularityPeriod_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureHistoricalPerformances/historicalPerformanceDataList/granularityPeriod
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_granularityPeriod_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_historyDataId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_suspectIntervalFlag_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureHistoricalPerformances/historicalPerformanceDataList/suspectIntervalFlag
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_suspectIntervalFlag_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_historyDataId);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_performanceData_get
* 
* Get database object callback
* Path: /MW_PureEthernetStructure_Pac/pureEthernetStructureHistoricalPerformances/historicalPerformanceDataList/performanceData
* Fill in 'dstval' contents
* 
* INPUTS:
*     see ncx/getcb.h for details
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_performanceData_get (
    val_value_t *dstval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol,
    const xmlChar *k_MW_PureEthernetStructure_Pac_pureEthernetStructureHistoricalPerformances_historicalPerformanceDataList_historyDataId);


/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_edit
* 
* Edit database object callback
* Path: /MW_PureEthernetStructure_Pac
* Add object instrumentation in COMMIT phase.
* 
* INPUTS:
*     see agt/agt_cb.h for details
*     k_ parameters are ancestor list key values.
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_MW_PureEthernetStructure_Pac_edit (
    ses_cb_t *scb,
    rpc_msg_t *msg,
    agt_cbtyp_t cbtyp,
    op_editop_t editop,
    val_value_t *newval,
    val_value_t *curval,
    const xmlChar *k_MW_PureEthernetStructure_Pac_layerProtocol);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_init
* 
* initialize the MicrowaveModel-ObjectClasses-PureEthernetStructure server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_init (
    const xmlChar *modname,
    const xmlChar *revision);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t u_MicrowaveModel_ObjectClasses_PureEthernetStructure_init2 (void);

/********************************************************************
* FUNCTION u_MicrowaveModel_ObjectClasses_PureEthernetStructure_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
extern void u_MicrowaveModel_ObjectClasses_PureEthernetStructure_cleanup (void);

#ifdef __cplusplus
} /* end extern 'C' */
#endif

#endif