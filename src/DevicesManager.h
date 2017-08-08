#ifndef _DevicesManager_H_
#define _DevicesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "DeviceResource.h"
#include "PageResource«DeviceResource».h"
#include "Result.h"
#include "SimpleUserResource.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Devices Devices
 * \ingroup Operations
 *  @{
 */
class DevicesManager {
public:
	DevicesManager();
	virtual ~DevicesManager();

/*! \brief Add device users. *Synchronous*
 *
 * 
 * \param userResources userResources *Required*
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDeviceUsersSync(char * accessToken,
	std::list<SimpleUserResource> userResources, int id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);

/*! \brief Add device users. *Asynchronous*
 *
 * 
 * \param userResources userResources *Required*
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDeviceUsersAsync(char * accessToken,
	std::list<SimpleUserResource> userResources, int id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);


/*! \brief Create a device. *Synchronous*
 *
 * 
 * \param device device *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createDeviceSync(char * accessToken,
	DeviceResource device, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);

/*! \brief Create a device. *Asynchronous*
 *
 * 
 * \param device device *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createDeviceAsync(char * accessToken,
	DeviceResource device, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);


/*! \brief Delete a device. *Synchronous*
 *
 * 
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a device. *Asynchronous*
 *
 * 
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a device user. *Synchronous*
 *
 * 
 * \param id The id of the device *Required*
 * \param userId The user id of the device user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceUserSync(char * accessToken,
	int id, int userId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a device user. *Asynchronous*
 *
 * 
 * \param id The id of the device *Required*
 * \param userId The user id of the device user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceUserAsync(char * accessToken,
	int id, int userId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete all device users. *Synchronous*
 *
 * 
 * \param id The id of the device *Required*
 * \param filterId Filter for device users to delete with a user id in a given comma separated list of ids
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceUsersSync(char * accessToken,
	int id, std::string filterId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete all device users. *Asynchronous*
 *
 * 
 * \param id The id of the device *Required*
 * \param filterId Filter for device users to delete with a user id in a given comma separated list of ids
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceUsersAsync(char * accessToken,
	int id, std::string filterId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single device. *Synchronous*
 *
 * 
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceSync(char * accessToken,
	int id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);

/*! \brief Get a single device. *Asynchronous*
 *
 * 
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceAsync(char * accessToken,
	int id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);


/*! \brief List and search devices. *Synchronous*
 *
 * Get a list of devices with optional filtering
 * \param filterMake Filter for devices with specified make
 * \param filterModel Filter for devices with specified model
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDevicesSync(char * accessToken,
	std::string filterMake, std::string filterModel, int size, int page, std::string order, 
	void(* handler)(PageResource«DeviceResource», Error, void* )
	, void* userData);

/*! \brief List and search devices. *Asynchronous*
 *
 * Get a list of devices with optional filtering
 * \param filterMake Filter for devices with specified make
 * \param filterModel Filter for devices with specified model
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDevicesAsync(char * accessToken,
	std::string filterMake, std::string filterModel, int size, int page, std::string order, 
	void(* handler)(PageResource«DeviceResource», Error, void* )
	, void* userData);


/*! \brief Update a device. *Synchronous*
 *
 * 
 * \param device device *Required*
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDeviceSync(char * accessToken,
	DeviceResource device, int id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);

/*! \brief Update a device. *Asynchronous*
 *
 * 
 * \param device device *Required*
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDeviceAsync(char * accessToken,
	DeviceResource device, int id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* DevicesManager_H_ */
