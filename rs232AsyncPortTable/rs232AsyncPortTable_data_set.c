/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "rs232AsyncPortTable.h"


/** @defgroup data_set data_set: Routines to set data
 *
 * These routines are used to set the value for individual objects. The
 * row context is passed, along with the new value.
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
    /*
     * NOTE: if you update this chart, please update the versions in
     *       local/mib2c-conf.d/parent-set.m2i
     *       agent/mibgroup/helpers/baby_steps.c
     * while you're at it.
     */
    /*
     ***********************************************************************
     * Baby Steps Flow Chart (2004.06.05)                                  *
     *                                                                     *
     * +--------------+    +================+    U = unconditional path    *
     * |optional state|    ||required state||    S = path for success      *
     * +--------------+    +================+    E = path for error        *
     ***********************************************************************
     *
     *                        +--------------+
     *                        |     pre      |
     *                        |   request    |
     *                        +--------------+
     *                               | U
     *                        +==============+
     *       +----------------||  object    ||
     *       |              E ||  lookup    ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |              E ||   check    ||
     *       |<---------------||   values   ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |       +<-------||   undo     ||
     *       |       |      E ||   setup    ||
     *       |       |        +==============+
     *       |       |               | S
     *       |       |        +==============+
     *       |       |        ||    set     ||-------------------------->+
     *       |       |        ||   value    || E                         |
     *       |       |        +==============+                           |
     *       |       |               | S                                 |
     *       |       |        +--------------+                           |
     *       |       |        |    check     |-------------------------->|
     *       |       |        |  consistency | E                         |
     *       |       |        +--------------+                           |
     *       |       |               | S                                 |
     *       |       |        +==============+         +==============+  |
     *       |       |        ||   commit   ||-------->||     undo   ||  |
     *       |       |        ||            || E       ||    commit  ||  |
     *       |       |        +==============+         +==============+  |
     *       |       |               | S                     U |<--------+
     *       |       |        +--------------+         +==============+
     *       |       |        | irreversible |         ||    undo    ||
     *       |       |        |    commit    |         ||     set    ||
     *       |       |        +--------------+         +==============+
     *       |       |               | U                     U |
     *       |       +-------------->|<------------------------+
     *       |                +==============+
     *       |                ||   undo     ||
     *       |                ||  cleanup   ||
     *       |                +==============+
     *       +---------------------->| U
     *                        +--------------+
     *                        |    post      |
     *                        |   request    |
     *                        +--------------+
     *
     */

/**
 * Setup up context with information needed to undo a set request.
 *
 * This function will be called before the individual node undo setup
 * functions are called. If you need to do any undo setup that is not
 * related to a specific column, you can do it here.
 *
 * Note that the undo context has been allocated with
 * rs232AsyncPortTable_allocate_data(), but may need extra
 * initialization similar to what you may have done in
 * rs232AsyncPortTable_rowreq_ctx_init().
 * Note that an individual node's undo_setup function will only be called
 * if that node is being set to a new value.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in the node's undo_setup
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (rs232AsyncPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
rs232AsyncPortTable_undo_setup( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_undo_setup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> Setup rs232AsyncPortTable undo.
     * set up rs232AsyncPortTable undo information, in preparation for a set.
     * Undo storage is in (* rs232AsyncPortOverrunErrs_val_ptr )*
     */

    return rc;
} /* rs232AsyncPortTable_undo_setup */

/**
 * Undo a set request.
 *
 * This function will be called before the individual node undo
 * functions are called. If you need to do any undo that is not
 * related to a specific column, you can do it here.
 *
 * Note that an individual node's undo function will only be called
 * if that node is being set to a new value.
 *
 * If there is anything  specific to a particular column (e.g. releasing
 * memory for a string), you should do that setup in the node's undo
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (rs232AsyncPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
rs232AsyncPortTable_undo( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_undo","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> rs232AsyncPortTable undo.
     * rs232AsyncPortTable undo information, in response to a failed set.
     * Undo storage is in (* rs232AsyncPortOverrunErrs_val_ptr )*
     */

    return rc;
} /* rs232AsyncPortTable_undo_setup */

/**
 * Cleanup up context undo information.
 *
 * This function will be called after set/commit processing. If you
 * allocated any resources in undo_setup, this is the place to release
 * those resources.
 *
 * This function is called regardless of the success or failure of the set
 * request. If you need to perform different steps for cleanup depending
 * on success or failure, you can add a flag to the rowreq_ctx.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (rs232AsyncPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
rs232AsyncPortTable_undo_cleanup( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_undo_cleanup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:452:M: |-> Cleanup rs232AsyncPortTable undo.
     * Undo storage is in (* rs232AsyncPortOverrunErrs_val_ptr )*
     */

    return rc;
} /* rs232AsyncPortTable_undo_cleanup */

/**
 * commit new values.
 *
 * At this point, you should have done everything you can to ensure that
 * this commit will not fail.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * rs232AsyncPortTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param rs232AsyncPortTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
rs232AsyncPortTable_commit( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    int             save_flags;

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * save flags, then clear until we actually do something
     */
    save_flags = rowreq_ctx->column_set_flags;
    rowreq_ctx->column_set_flags = 0;

    /*
     * commit rs232AsyncPortTable data
     * 1) check the column's flag in save_flags to see if it was set.
     * 2) clear the flag when you handle that column
     * 3) set the column's flag in column_set_flags if it needs undo
     *    processing in case of a failure.
     */
    if (save_flags & COLUMN_RS232ASYNCPORTBITS_FLAG) {
       save_flags &= ~COLUMN_RS232ASYNCPORTBITS_FLAG; /* clear rs232AsyncPortBits */
       /*
        * TODO:482:o: |-> commit column rs232AsyncPortBits.
        */
       //rachel
       rowreq_ctx->column_set_flags |= COLUMN_RS232ASYNCPORTBITS_FLAG;
       //rachel
    }

    if (save_flags & COLUMN_RS232ASYNCPORTSTOPBITS_FLAG) {
       save_flags &= ~COLUMN_RS232ASYNCPORTSTOPBITS_FLAG; /* clear rs232AsyncPortStopBits */
       /*
        * TODO:482:o: |-> commit column rs232AsyncPortStopBits.
        */
       //rachel
       rowreq_ctx->column_set_flags |= COLUMN_RS232ASYNCPORTSTOPBITS_FLAG;
       //rachel
    }

    if (save_flags & COLUMN_RS232ASYNCPORTPARITY_FLAG) {
       save_flags &= ~COLUMN_RS232ASYNCPORTPARITY_FLAG; /* clear rs232AsyncPortParity */
       /*
        * TODO:482:o: |-> commit column rs232AsyncPortParity.
        */
       //rachel
       rowreq_ctx->column_set_flags |= COLUMN_RS232ASYNCPORTPARITY_FLAG;
       //rachel
    }

    if (save_flags & COLUMN_RS232ASYNCPORTAUTOBAUD_FLAG) {
       save_flags &= ~COLUMN_RS232ASYNCPORTAUTOBAUD_FLAG; /* clear rs232AsyncPortAutobaud */
       /*
        * TODO:482:o: |-> commit column rs232AsyncPortAutobaud.
        */
       rc = -1;
       if(-1 == rc) {
           snmp_log(LOG_ERR,"rs232AsyncPortTable column rs232AsyncPortAutobaud commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo rs232AsyncPortAutobaud
             */
            rowreq_ctx->column_set_flags |= COLUMN_RS232ASYNCPORTAUTOBAUD_FLAG;
       }
    }

    /*
     * if we successfully commited this row, set the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags |= MFD_ROW_DIRTY;
    }

    if (save_flags) {
       snmp_log(LOG_ERR, "unhandled columns (0x%x) in commit\n", save_flags);
       return MFD_ERROR;
    }

    return rc;
} /* rs232AsyncPortTable_commit */

/**
 * undo commit new values.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * rs232AsyncPortTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param rs232AsyncPortTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
rs232AsyncPortTable_undo_commit( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_undo_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:485:M: |-> Undo rs232AsyncPortTable commit.
     * check the column's flag in rowreq_ctx->column_set_flags to see
     * if it was set during commit, then undo it.
     *
     * eg: if (rowreq_ctx->column_set_flags & COLUMN__FLAG) {}
     */

    
    /*
     * if we successfully un-commited this row, clear the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags &= ~MFD_ROW_DIRTY;
    }

    return rc;
} /* rs232AsyncPortTable_undo_commit */

/*
 * TODO:440:M: Implement rs232AsyncPortTable node value checks.
 * TODO:450:M: Implement rs232AsyncPortTable undo functions.
 * TODO:460:M: Implement rs232AsyncPortTable set functions.
 * TODO:480:M: Implement rs232AsyncPortTable commit functions.
 */
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
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortBits_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * rs232AsyncPortTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *    The value is in (one of) the range set(s):  5 - 8
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
rs232AsyncPortBits_check_value( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, long rs232AsyncPortBits_val)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortBits_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid rs232AsyncPortBits value.
     */

    return MFD_SUCCESS; /* rs232AsyncPortBits value not illegal */
} /* rs232AsyncPortBits_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (rs232AsyncPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * rs232AsyncPortTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
rs232AsyncPortBits_undo_setup( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortBits_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup rs232AsyncPortBits undo.
     */
    /*
     * copy rs232AsyncPortBits data
     * set rowreq_ctx->undo->rs232AsyncPortBits from rowreq_ctx->data.rs232AsyncPortBits
     */
    rowreq_ctx->undo->rs232AsyncPortBits = rowreq_ctx->data.rs232AsyncPortBits;


    return MFD_SUCCESS;
} /* rs232AsyncPortBits_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param rs232AsyncPortBits_val
 *        A long containing the new value.
 */
int
rs232AsyncPortBits_set( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, long rs232AsyncPortBits_val )
{

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortBits_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set rs232AsyncPortBits value.
     * set rs232AsyncPortBits value in rowreq_ctx->data
     */
    rowreq_ctx->data.rs232AsyncPortBits = rs232AsyncPortBits_val;

    return MFD_SUCCESS;
} /* rs232AsyncPortBits_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
rs232AsyncPortBits_undo( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortBits_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up rs232AsyncPortBits undo.
     */
    /*
     * copy rs232AsyncPortBits data
     * set rowreq_ctx->data.rs232AsyncPortBits from rowreq_ctx->undo->rs232AsyncPortBits
     */
    rowreq_ctx->data.rs232AsyncPortBits = rowreq_ctx->undo->rs232AsyncPortBits;

    
    return MFD_SUCCESS;
} /* rs232AsyncPortBits_undo */

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
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortStopBits_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * rs232AsyncPortTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *    The value is one of  one(1), two(2), oneAndHalf(3), dynamic(4)
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
rs232AsyncPortStopBits_check_value( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long rs232AsyncPortStopBits_val)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortStopBits_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid rs232AsyncPortStopBits value.
     */

    return MFD_SUCCESS; /* rs232AsyncPortStopBits value not illegal */
} /* rs232AsyncPortStopBits_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (rs232AsyncPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * rs232AsyncPortTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
rs232AsyncPortStopBits_undo_setup( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortStopBits_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup rs232AsyncPortStopBits undo.
     */
    /*
     * copy rs232AsyncPortStopBits data
     * set rowreq_ctx->undo->rs232AsyncPortStopBits from rowreq_ctx->data.rs232AsyncPortStopBits
     */
    rowreq_ctx->undo->rs232AsyncPortStopBits = rowreq_ctx->data.rs232AsyncPortStopBits;


    return MFD_SUCCESS;
} /* rs232AsyncPortStopBits_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param rs232AsyncPortStopBits_val
 *        A long containing the new value.
 */
int
rs232AsyncPortStopBits_set( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long rs232AsyncPortStopBits_val )
{

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortStopBits_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set rs232AsyncPortStopBits value.
     * set rs232AsyncPortStopBits value in rowreq_ctx->data
     */
    rowreq_ctx->data.rs232AsyncPortStopBits = rs232AsyncPortStopBits_val;

    return MFD_SUCCESS;
} /* rs232AsyncPortStopBits_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
rs232AsyncPortStopBits_undo( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortStopBits_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up rs232AsyncPortStopBits undo.
     */
    /*
     * copy rs232AsyncPortStopBits data
     * set rowreq_ctx->data.rs232AsyncPortStopBits from rowreq_ctx->undo->rs232AsyncPortStopBits
     */
    rowreq_ctx->data.rs232AsyncPortStopBits = rowreq_ctx->undo->rs232AsyncPortStopBits;

    
    return MFD_SUCCESS;
} /* rs232AsyncPortStopBits_undo */

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
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortParity_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * rs232AsyncPortTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *    The value is one of  none(1), odd(2), even(3), mark(4), space(5)
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
rs232AsyncPortParity_check_value( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long rs232AsyncPortParity_val)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortParity_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid rs232AsyncPortParity value.
     */

    return MFD_SUCCESS; /* rs232AsyncPortParity value not illegal */
} /* rs232AsyncPortParity_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (rs232AsyncPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * rs232AsyncPortTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
rs232AsyncPortParity_undo_setup( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortParity_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup rs232AsyncPortParity undo.
     */
    /*
     * copy rs232AsyncPortParity data
     * set rowreq_ctx->undo->rs232AsyncPortParity from rowreq_ctx->data.rs232AsyncPortParity
     */
    rowreq_ctx->undo->rs232AsyncPortParity = rowreq_ctx->data.rs232AsyncPortParity;


    return MFD_SUCCESS;
} /* rs232AsyncPortParity_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param rs232AsyncPortParity_val
 *        A long containing the new value.
 */
int
rs232AsyncPortParity_set( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long rs232AsyncPortParity_val )
{

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortParity_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set rs232AsyncPortParity value.
     * set rs232AsyncPortParity value in rowreq_ctx->data
     */
    rowreq_ctx->data.rs232AsyncPortParity = rs232AsyncPortParity_val;

    return MFD_SUCCESS;
} /* rs232AsyncPortParity_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
rs232AsyncPortParity_undo( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortParity_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up rs232AsyncPortParity undo.
     */
    /*
     * copy rs232AsyncPortParity data
     * set rowreq_ctx->data.rs232AsyncPortParity from rowreq_ctx->undo->rs232AsyncPortParity
     */
    rowreq_ctx->data.rs232AsyncPortParity = rowreq_ctx->undo->rs232AsyncPortParity;

    
    return MFD_SUCCESS;
} /* rs232AsyncPortParity_undo */

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
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rs232AsyncPortAutobaud_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * rs232AsyncPortTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *    The value is one of  enabled(1), disabled(2)
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
rs232AsyncPortAutobaud_check_value( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long rs232AsyncPortAutobaud_val)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortAutobaud_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid rs232AsyncPortAutobaud value.
     */

    return MFD_SUCCESS; /* rs232AsyncPortAutobaud value not illegal */
} /* rs232AsyncPortAutobaud_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (rs232AsyncPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * rs232AsyncPortTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
rs232AsyncPortAutobaud_undo_setup( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortAutobaud_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup rs232AsyncPortAutobaud undo.
     */
    /*
     * copy rs232AsyncPortAutobaud data
     * set rowreq_ctx->undo->rs232AsyncPortAutobaud from rowreq_ctx->data.rs232AsyncPortAutobaud
     */
    rowreq_ctx->undo->rs232AsyncPortAutobaud = rowreq_ctx->data.rs232AsyncPortAutobaud;


    return MFD_SUCCESS;
} /* rs232AsyncPortAutobaud_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param rs232AsyncPortAutobaud_val
 *        A long containing the new value.
 */
int
rs232AsyncPortAutobaud_set( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx, u_long rs232AsyncPortAutobaud_val )
{

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortAutobaud_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set rs232AsyncPortAutobaud value.
     * set rs232AsyncPortAutobaud value in rowreq_ctx->data
     */
    rowreq_ctx->data.rs232AsyncPortAutobaud = rs232AsyncPortAutobaud_val;

    return MFD_SUCCESS;
} /* rs232AsyncPortAutobaud_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
rs232AsyncPortAutobaud_undo( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortAutobaud_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up rs232AsyncPortAutobaud undo.
     */
    /*
     * copy rs232AsyncPortAutobaud data
     * set rowreq_ctx->data.rs232AsyncPortAutobaud from rowreq_ctx->undo->rs232AsyncPortAutobaud
     */
    rowreq_ctx->data.rs232AsyncPortAutobaud = rowreq_ctx->undo->rs232AsyncPortAutobaud;

    
    return MFD_SUCCESS;
} /* rs232AsyncPortAutobaud_undo */

/** @} */
