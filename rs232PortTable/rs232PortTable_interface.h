/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
/** @ingroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef RS232PORTTABLE_INTERFACE_H
#define RS232PORTTABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "rs232PortTable.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _rs232PortTable_initialize_interface(rs232PortTable_registration * user_ctx,
                                    u_long flags);
void _rs232PortTable_shutdown_interface(rs232PortTable_registration * user_ctx);

rs232PortTable_registration *
rs232PortTable_registration_get( void );

rs232PortTable_registration *
rs232PortTable_registration_set( rs232PortTable_registration * newreg );

netsnmp_container *rs232PortTable_container_get( void );
int rs232PortTable_container_size( void );

u_int rs232PortTable_dirty_get( void );
void rs232PortTable_dirty_set( u_int status );

    rs232PortTable_rowreq_ctx * rs232PortTable_allocate_rowreq_ctx(void *);
void rs232PortTable_release_rowreq_ctx(rs232PortTable_rowreq_ctx *rowreq_ctx);

int rs232PortTable_index_to_oid(netsnmp_index *oid_idx,
                            rs232PortTable_mib_index *mib_idx);
int rs232PortTable_index_from_oid(netsnmp_index *oid_idx,
                              rs232PortTable_mib_index *mib_idx);

/*
 * access to certain internals. use with caution!
 */
void rs232PortTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* RS232PORTTABLE_INTERFACE_H */
/** @} */