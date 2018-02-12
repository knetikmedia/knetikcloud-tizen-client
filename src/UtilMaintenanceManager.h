#ifndef _UtilMaintenanceManager_H_
#define _UtilMaintenanceManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Maintenance.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup UtilMaintenance UtilMaintenance
 * \ingroup Operations
 *  @{
 */
class UtilMaintenanceManager {
public:
	UtilMaintenanceManager();
	virtual ~UtilMaintenanceManager();

/*! \brief Delete maintenance info. *Synchronous*
 *
 * <b>Permissions Needed:</b> MAINTENANCE_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteMaintenanceSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete maintenance info. *Asynchronous*
 *
 * <b>Permissions Needed:</b> MAINTENANCE_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteMaintenanceAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get current maintenance info. *Synchronous*
 *
 * Get current maintenance info. 404 if no maintenance. <br><br><b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMaintenanceSync(char * accessToken,
	
	void(* handler)(Maintenance, Error, void* )
	, void* userData);

/*! \brief Get current maintenance info. *Asynchronous*
 *
 * Get current maintenance info. 404 if no maintenance. <br><br><b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMaintenanceAsync(char * accessToken,
	
	void(* handler)(Maintenance, Error, void* )
	, void* userData);


/*! \brief Set current maintenance info. *Synchronous*
 *
 * <b>Permissions Needed:</b> MAINTENANCE_ADMIN
 * \param maintenance The maintenance object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setMaintenanceSync(char * accessToken,
	Maintenance maintenance, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set current maintenance info. *Asynchronous*
 *
 * <b>Permissions Needed:</b> MAINTENANCE_ADMIN
 * \param maintenance The maintenance object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setMaintenanceAsync(char * accessToken,
	Maintenance maintenance, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update current maintenance info. *Synchronous*
 *
 * <b>Permissions Needed:</b> MAINTENANCE_ADMIN
 * \param maintenance The maintenance object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateMaintenanceSync(char * accessToken,
	Maintenance maintenance, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update current maintenance info. *Asynchronous*
 *
 * <b>Permissions Needed:</b> MAINTENANCE_ADMIN
 * \param maintenance The maintenance object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateMaintenanceAsync(char * accessToken,
	Maintenance maintenance, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UtilMaintenanceManager_H_ */
