/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "rs232PortTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement rs232PortTable get routines.
 * TODO:240:M: Implement rs232PortTable mapping routines (if any).
 *
 * These routine are used to get the value for individual objects. The
 * row context is passed, along with a pointer to the memory where the
 * value should be copied.
 *
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table rs232PortTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * RS-232-MIB::rs232PortTable is subid 2 of rs232.
 * Its status is Current.
 * OID: .1.3.6.1.2.1.10.33.2, length: 9
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement rs232PortTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param rs232PortIndex_val
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This convenience function is useful for setting all the MIB index
 *  components with a single function call. It is assume that the C values
 *  have already been mapped from their native/rawformat to the MIB format.
 */
int
rs232PortTable_indexes_set_tbl_idx(rs232PortTable_mib_index *tbl_idx, long rs232PortIndex_val)
{
    DEBUGMSGTL(("verbose:rs232PortTable:rs232PortTable_indexes_set_tbl_idx","called\n"));

    /* rs232PortIndex(1)/InterfaceIndex/ASN_INTEGER/long(long)//l/A/w/e/R/d/H */
    tbl_idx->rs232PortIndex = rs232PortIndex_val;
    

    return MFD_SUCCESS;
} /* rs232PortTable_indexes_set_tbl_idx */

/**
 * @internal
 * set row context indexes
 *
 * @param reqreq_ctx the row context that needs updated indexes
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This function sets the mib indexs, then updates the oid indexs
 *  from the mib index.
 */
int
rs232PortTable_indexes_set(rs232PortTable_rowreq_ctx *rowreq_ctx, long rs232PortIndex_val)
{
    DEBUGMSGTL(("verbose:rs232PortTable:rs232PortTable_indexes_set","called\n"));

    if(MFD_SUCCESS != rs232PortTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , rs232PortIndex_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != rs232PortTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* rs232PortTable_indexes_set */


/*---------------------------------------------------------------------
 * RS-232-MIB::rs232PortEntry.rs232PortType
 * rs232PortType is subid 2 of rs232PortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.10.33.2.1.2
 * Description:
The port's hardware type.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 * Enum range: 5/8. Values:  other(1), rs232(2), rs422(3), rs423(4), v35(5), x21(6)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the rs232PortType data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232PortType_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232PortType_get( rs232PortTable_rowreq_ctx *rowreq_ctx, u_long * rs232PortType_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232PortType_val_ptr );


    DEBUGMSGTL(("verbose:rs232PortTable:rs232PortType_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232PortType data.
 * copy (* rs232PortType_val_ptr ) from rowreq_ctx->data
 */
    (* rs232PortType_val_ptr ) = rowreq_ctx->data.rs232PortType;

    return MFD_SUCCESS;
} /* rs232PortType_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232PortEntry.rs232PortInSigNumber
 * rs232PortInSigNumber is subid 3 of rs232PortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.10.33.2.1.3
 * Description:
The number of input signals for the port in the
        input signal table (rs232PortInSigTable).  The table
        contains entries only for those signals the software
        can detect and that are useful to observe.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the rs232PortInSigNumber data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232PortInSigNumber_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232PortInSigNumber_get( rs232PortTable_rowreq_ctx *rowreq_ctx, long * rs232PortInSigNumber_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232PortInSigNumber_val_ptr );


    DEBUGMSGTL(("verbose:rs232PortTable:rs232PortInSigNumber_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232PortInSigNumber data.
 * copy (* rs232PortInSigNumber_val_ptr ) from rowreq_ctx->data
 */
    (* rs232PortInSigNumber_val_ptr ) = rowreq_ctx->data.rs232PortInSigNumber;

    return MFD_SUCCESS;
} /* rs232PortInSigNumber_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232PortEntry.rs232PortOutSigNumber
 * rs232PortOutSigNumber is subid 4 of rs232PortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.10.33.2.1.4
 * Description:
The number of output signals for the port in the
        output signal table (rs232PortOutSigTable).  The
        table contains entries only for those signals the
        software can assert and that are useful to observe.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the rs232PortOutSigNumber data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232PortOutSigNumber_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232PortOutSigNumber_get( rs232PortTable_rowreq_ctx *rowreq_ctx, long * rs232PortOutSigNumber_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232PortOutSigNumber_val_ptr );


    DEBUGMSGTL(("verbose:rs232PortTable:rs232PortOutSigNumber_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232PortOutSigNumber data.
 * copy (* rs232PortOutSigNumber_val_ptr ) from rowreq_ctx->data
 */
    (* rs232PortOutSigNumber_val_ptr ) = rowreq_ctx->data.rs232PortOutSigNumber;

    return MFD_SUCCESS;
} /* rs232PortOutSigNumber_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232PortEntry.rs232PortInSpeed
 * rs232PortInSpeed is subid 5 of rs232PortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.10.33.2.1.5
 * Description:
The port's input speed in bits per second.  Note that
        non-standard values, such as 9612, are probably not allowed
        on most implementations.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the rs232PortInSpeed data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232PortInSpeed_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232PortInSpeed_get( rs232PortTable_rowreq_ctx *rowreq_ctx, long * rs232PortInSpeed_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232PortInSpeed_val_ptr );


    DEBUGMSGTL(("verbose:rs232PortTable:rs232PortInSpeed_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232PortInSpeed data.
 * copy (* rs232PortInSpeed_val_ptr ) from rowreq_ctx->data
 */
    (* rs232PortInSpeed_val_ptr ) = rowreq_ctx->data.rs232PortInSpeed;

    return MFD_SUCCESS;
} /* rs232PortInSpeed_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232PortEntry.rs232PortOutSpeed
 * rs232PortOutSpeed is subid 6 of rs232PortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.10.33.2.1.6
 * Description:
The port's output speed in bits per second.  Note that
        non-standard values, such as 9612, are probably not allowed
        on most implementations.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the rs232PortOutSpeed data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232PortOutSpeed_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232PortOutSpeed_get( rs232PortTable_rowreq_ctx *rowreq_ctx, long * rs232PortOutSpeed_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232PortOutSpeed_val_ptr );


    DEBUGMSGTL(("verbose:rs232PortTable:rs232PortOutSpeed_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232PortOutSpeed data.
 * copy (* rs232PortOutSpeed_val_ptr ) from rowreq_ctx->data
 */
    (* rs232PortOutSpeed_val_ptr ) = rowreq_ctx->data.rs232PortOutSpeed;

    return MFD_SUCCESS;
} /* rs232PortOutSpeed_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232PortEntry.rs232PortInFlowType
 * rs232PortInFlowType is subid 7 of rs232PortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.10.33.2.1.7
 * Description:
The port's type of input flow control.  'none'
        indicates no flow control at this level.
        'ctsRts' and 'dsrDtr' indicate use of the indicated
        hardware signals.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 3/8. Values:  none(1), ctsRts(2), dsrDtr(3)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the rs232PortInFlowType data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232PortInFlowType_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232PortInFlowType_get( rs232PortTable_rowreq_ctx *rowreq_ctx, u_long * rs232PortInFlowType_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232PortInFlowType_val_ptr );


    DEBUGMSGTL(("verbose:rs232PortTable:rs232PortInFlowType_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232PortInFlowType data.
 * copy (* rs232PortInFlowType_val_ptr ) from rowreq_ctx->data
 */
    (* rs232PortInFlowType_val_ptr ) = rowreq_ctx->data.rs232PortInFlowType;

    return MFD_SUCCESS;
} /* rs232PortInFlowType_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232PortEntry.rs232PortOutFlowType
 * rs232PortOutFlowType is subid 8 of rs232PortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.10.33.2.1.8
 * Description:
The port's type of output flow control.  'none'

        indicates no flow control at this level.
        'ctsRts' and 'dsrDtr' indicate use of the indicated
        hardware signals.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 3/8. Values:  none(1), ctsRts(2), dsrDtr(3)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the rs232PortOutFlowType data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232PortOutFlowType_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232PortOutFlowType_get( rs232PortTable_rowreq_ctx *rowreq_ctx, u_long * rs232PortOutFlowType_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232PortOutFlowType_val_ptr );


    DEBUGMSGTL(("verbose:rs232PortTable:rs232PortOutFlowType_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232PortOutFlowType data.
 * copy (* rs232PortOutFlowType_val_ptr ) from rowreq_ctx->data
 */
    (* rs232PortOutFlowType_val_ptr ) = rowreq_ctx->data.rs232PortOutFlowType;

    return MFD_SUCCESS;
} /* rs232PortOutFlowType_get */



/** @} */
