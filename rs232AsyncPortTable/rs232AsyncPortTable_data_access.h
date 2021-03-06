/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef RS232ASYNCPORTTABLE_DATA_ACCESS_H
#define RS232ASYNCPORTTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern "C" {
#endif


/* *********************************************************************
 * function declarations
 */

/* *********************************************************************
 * Table declarations
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


    int rs232AsyncPortTable_init_data(rs232AsyncPortTable_registration * rs232AsyncPortTable_reg);


void rs232AsyncPortTable_container_init(netsnmp_container **container_ptr_ptr);
void rs232AsyncPortTable_container_shutdown(netsnmp_container *container_ptr);

int rs232AsyncPortTable_container_load(netsnmp_container *container);
void rs232AsyncPortTable_container_free(netsnmp_container *container);

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
/* *********************************************************************
 * Since we have no idea how you really access your data, we'll go with
 * a worst case example: a flat text file.
 */
#define MAX_LINE_SIZE 256
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    int rs232AsyncPortTable_row_prep( rs232AsyncPortTable_rowreq_ctx *rowreq_ctx);



#ifdef __cplusplus
}
#endif

#endif /* RS232ASYNCPORTTABLE_DATA_ACCESS_H */
