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
#include "rs232AsyncPortTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement rs232AsyncPortTable get routines.
 * TODO:240:M: Implement rs232AsyncPortTable mapping routines (if any).
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
 *** Table rs232AsyncPortTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * RS-232-MIB::rs232AsyncPortTable is subid 3 of rs232.
 * Its status is Current.
 * OID: .1.3.6.1.2.1.10.33.3, length: 9
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement rs232AsyncPortTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param rs232AsyncPortIndex_val
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
rs232AsyncPortTable_indexes_set_tbl_idx(rs232AsyncPortTable_mib_index *tbl_idx, long rs232AsyncPortIndex_val)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_indexes_set_tbl_idx","called\n"));

    /* rs232AsyncPortIndex(1)/InterfaceIndex/ASN_INTEGER/long(long)//l/A/w/e/R/d/H */
    tbl_idx->rs232AsyncPortIndex = rs232AsyncPortIndex_val;
    

    return MFD_SUCCESS;
} /* rs232AsyncPortTable_indexes_set_tbl_idx */

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
rs232AsyncPortTable_indexes_set(rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, long rs232AsyncPortIndex_val)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_indexes_set","called\n"));

    if(MFD_SUCCESS != rs232AsyncPortTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , rs232AsyncPortIndex_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != rs232AsyncPortTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* rs232AsyncPortTable_indexes_set */


/*---------------------------------------------------------------------
 * RS-232-MIB::rs232AsyncPortEntry.rs232AsyncPortBits
 * rs232AsyncPortBits is subid 2 of rs232AsyncPortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.10.33.3.1.2
 * Description:
The port's number of bits in a character.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   0
 *   settable   1
 *
 * Ranges:  5 - 8;
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the rs232AsyncPortBits data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortBits_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232AsyncPortBits_get( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, long * rs232AsyncPortBits_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232AsyncPortBits_val_ptr );


    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortBits_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232AsyncPortBits data.
 * copy (* rs232AsyncPortBits_val_ptr ) from rowreq_ctx->data
 */
    (* rs232AsyncPortBits_val_ptr ) = rowreq_ctx->data.rs232AsyncPortBits;

    return MFD_SUCCESS;
} /* rs232AsyncPortBits_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232AsyncPortEntry.rs232AsyncPortStopBits
 * rs232AsyncPortStopBits is subid 3 of rs232AsyncPortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.10.33.3.1.3
 * Description:
The port's number of stop bits.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 4/8. Values:  one(1), two(2), oneAndHalf(3), dynamic(4)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the rs232AsyncPortStopBits data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortStopBits_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232AsyncPortStopBits_get( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long * rs232AsyncPortStopBits_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232AsyncPortStopBits_val_ptr );


    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortStopBits_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232AsyncPortStopBits data.
 * copy (* rs232AsyncPortStopBits_val_ptr ) from rowreq_ctx->data
 */
    (* rs232AsyncPortStopBits_val_ptr ) = rowreq_ctx->data.rs232AsyncPortStopBits;

    return MFD_SUCCESS;
} /* rs232AsyncPortStopBits_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232AsyncPortEntry.rs232AsyncPortParity
 * rs232AsyncPortParity is subid 4 of rs232AsyncPortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.10.33.3.1.4
 * Description:
The port's sense of a character parity bit.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 3/8. Values:  none(1), odd(2), even(3), mark(4), space(5)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the rs232AsyncPortParity data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortParity_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232AsyncPortParity_get( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long * rs232AsyncPortParity_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232AsyncPortParity_val_ptr );


    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortParity_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232AsyncPortParity data.
 * copy (* rs232AsyncPortParity_val_ptr ) from rowreq_ctx->data
 */
    (* rs232AsyncPortParity_val_ptr ) = rowreq_ctx->data.rs232AsyncPortParity;

    return MFD_SUCCESS;
} /* rs232AsyncPortParity_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232AsyncPortEntry.rs232AsyncPortAutobaud
 * rs232AsyncPortAutobaud is subid 5 of rs232AsyncPortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.10.33.3.1.5
 * Description:
A control for the port's ability to automatically
        sense input speed.

        When rs232PortAutoBaud is 'enabled', a port may
        autobaud to values different from the set values for
        speed, parity, and character size.  As a result a
        network management system may temporarily observe
        values different from what was previously set.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  enabled(1), disabled(2)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the rs232AsyncPortAutobaud data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortAutobaud_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232AsyncPortAutobaud_get( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long * rs232AsyncPortAutobaud_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232AsyncPortAutobaud_val_ptr );


    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortAutobaud_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232AsyncPortAutobaud data.
 * copy (* rs232AsyncPortAutobaud_val_ptr ) from rowreq_ctx->data
 */
    (* rs232AsyncPortAutobaud_val_ptr ) = rowreq_ctx->data.rs232AsyncPortAutobaud;

    return MFD_SUCCESS;
} /* rs232AsyncPortAutobaud_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232AsyncPortEntry.rs232AsyncPortParityErrs
 * rs232AsyncPortParityErrs is subid 6 of rs232AsyncPortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.10.33.3.1.6
 * Description:
Total number of characters with a parity error,
        input from the port since system re-initialization
        and while the port state was 'up' or 'test'.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the rs232AsyncPortParityErrs data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortParityErrs_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232AsyncPortParityErrs_get( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long * rs232AsyncPortParityErrs_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232AsyncPortParityErrs_val_ptr );


    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortParityErrs_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232AsyncPortParityErrs data.
 * copy (* rs232AsyncPortParityErrs_val_ptr ) from rowreq_ctx->data
 */
    (* rs232AsyncPortParityErrs_val_ptr ) = rowreq_ctx->data.rs232AsyncPortParityErrs;

    return MFD_SUCCESS;
} /* rs232AsyncPortParityErrs_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232AsyncPortEntry.rs232AsyncPortFramingErrs
 * rs232AsyncPortFramingErrs is subid 7 of rs232AsyncPortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.10.33.3.1.7
 * Description:
Total number of characters with a framing error,
        input from the port since system re-initialization
        and while the port state was 'up' or 'test'.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the rs232AsyncPortFramingErrs data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortFramingErrs_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232AsyncPortFramingErrs_get( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long * rs232AsyncPortFramingErrs_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232AsyncPortFramingErrs_val_ptr );


    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortFramingErrs_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232AsyncPortFramingErrs data.
 * copy (* rs232AsyncPortFramingErrs_val_ptr ) from rowreq_ctx->data
 */
    (* rs232AsyncPortFramingErrs_val_ptr ) = rowreq_ctx->data.rs232AsyncPortFramingErrs;

    return MFD_SUCCESS;
} /* rs232AsyncPortFramingErrs_get */

/*---------------------------------------------------------------------
 * RS-232-MIB::rs232AsyncPortEntry.rs232AsyncPortOverrunErrs
 * rs232AsyncPortOverrunErrs is subid 8 of rs232AsyncPortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.10.33.3.1.8
 * Description:
Total number of characters with an overrun error,
        input from the port since system re-initialization
        and while the port state was 'up' or 'test'.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the rs232AsyncPortOverrunErrs data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortOverrunErrs_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rs232AsyncPortOverrunErrs_get( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long * rs232AsyncPortOverrunErrs_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != rs232AsyncPortOverrunErrs_val_ptr );


    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortOverrunErrs_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the rs232AsyncPortOverrunErrs data.
 * copy (* rs232AsyncPortOverrunErrs_val_ptr ) from rowreq_ctx->data
 */
    (* rs232AsyncPortOverrunErrs_val_ptr ) = rowreq_ctx->data.rs232AsyncPortOverrunErrs;

    return MFD_SUCCESS;
} /* rs232AsyncPortOverrunErrs_get */



/** @} */
