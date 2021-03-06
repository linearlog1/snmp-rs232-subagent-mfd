/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for rs232AsyncPortTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "rs232AsyncPortTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "rs232AsyncPortTable_interface.h"

const oid rs232AsyncPortTable_oid[] = { RS232ASYNCPORTTABLE_OID };
const int rs232AsyncPortTable_oid_size = OID_LENGTH(rs232AsyncPortTable_oid);

    rs232AsyncPortTable_registration  rs232AsyncPortTable_user_context;

void initialize_table_rs232AsyncPortTable(void);
void shutdown_table_rs232AsyncPortTable(void);


/**
 * Initializes the rs232AsyncPortTable module
 */
void
init_rs232AsyncPortTable(void)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:init_rs232AsyncPortTable","called\n"));

    /*
     * TODO:300:o: Perform rs232AsyncPortTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("rs232AsyncPortTable"))
        initialize_table_rs232AsyncPortTable();

} /* init_rs232AsyncPortTable */

/**
 * Shut-down the rs232AsyncPortTable module (agent is exiting)
 */
void
shutdown_rs232AsyncPortTable(void)
{
    if (should_init("rs232AsyncPortTable"))
        shutdown_table_rs232AsyncPortTable();

}

/**
 * Initialize the table rs232AsyncPortTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_rs232AsyncPortTable(void)
{
    rs232AsyncPortTable_registration * user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:rs232AsyncPortTable:initialize_table_rs232AsyncPortTable","called\n"));

    /*
     * TODO:301:o: Perform rs232AsyncPortTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize rs232AsyncPortTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("rs232AsyncPortTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    _rs232AsyncPortTable_initialize_interface(user_context, flags);
} /* initialize_table_rs232AsyncPortTable */

/**
 * Shutdown the table rs232AsyncPortTable 
 */
void
shutdown_table_rs232AsyncPortTable(void)
{
    /*
     * call interface shutdown code
     */
    _rs232AsyncPortTable_shutdown_interface(&rs232AsyncPortTable_user_context);
}

/**
 * extra context initialization (eg default values)
 *
 * @param rowreq_ctx    : row request context
 * @param user_init_ctx : void pointer for user (parameter to rowreq_ctx_allocate)
 *
 * @retval MFD_SUCCESS  : no errors
 * @retval MFD_ERROR    : error (context allocate will fail)
 */
int
rs232AsyncPortTable_rowreq_ctx_init(rs232AsyncPortTable_rowreq_ctx *rowreq_ctx,
                           void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_rowreq_ctx_init","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:210:o: |-> Perform extra rs232AsyncPortTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
} /* rs232AsyncPortTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void rs232AsyncPortTable_rowreq_ctx_cleanup(rs232AsyncPortTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_rowreq_ctx_cleanup","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:211:o: |-> Perform extra rs232AsyncPortTable rowreq cleanup.
     */
} /* rs232AsyncPortTable_rowreq_ctx_cleanup */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
rs232AsyncPortTable_pre_request(rs232AsyncPortTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform rs232AsyncPortTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* rs232AsyncPortTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
rs232AsyncPortTable_post_request(rs232AsyncPortTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:rs232AsyncPortTable:rs232AsyncPortTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform rs232AsyncPortTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (rs232AsyncPortTable_dirty_get()) {
        /*
         * check if request was successful. If so, this would be
         * a good place to save data to its persistent store.
         */
        if (MFD_SUCCESS == rc) {
            /*
             * save changed rows, if you haven't already
             */
        }
        
        rs232AsyncPortTable_dirty_set(0); /* clear table dirty flag */
    }

    return MFD_SUCCESS;
} /* rs232AsyncPortTable_post_request */


/** @{ */
