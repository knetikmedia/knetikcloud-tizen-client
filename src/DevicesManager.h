#ifndef _DevicesManager_H_
#define _DevicesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "DeviceResource.h"
#include "PageResource«DeviceResource».h"
#include "PageResource«TemplateResource».h"
#include "Result.h"
#include "SimpleUserResource.h"
#include "TemplateResource.h"
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
 * <b>Permissions Needed:</b> DEVICES_ADMIN or owner
 * \param userResources userResources *Required*
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDeviceUsersSync(char * accessToken,
	std::list<SimpleUserResource> userResources, std::string id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);

/*! \brief Add device users. *Asynchronous*
 *
 * <b>Permissions Needed:</b> DEVICES_ADMIN or owner
 * \param userResources userResources *Required*
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDeviceUsersAsync(char * accessToken,
	std::list<SimpleUserResource> userResources, std::string id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);


/*! \brief Create a device. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
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
 * <b>Permissions Needed:</b> ANY
 * \param device device *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createDeviceAsync(char * accessToken,
	DeviceResource device, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);


/*! \brief Create a device template. *Synchronous*
 *
 * Device Templates define a type of device and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param deviceTemplateResource The device template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createDeviceTemplateSync(char * accessToken,
	TemplateResource deviceTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a device template. *Asynchronous*
 *
 * Device Templates define a type of device and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param deviceTemplateResource The device template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createDeviceTemplateAsync(char * accessToken,
	TemplateResource deviceTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete a device. *Synchronous*
 *
 * <b>Permissions Needed:</b> DEVICES_ADMIN or owner
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a device. *Asynchronous*
 *
 * <b>Permissions Needed:</b> DEVICES_ADMIN or owner
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete an device template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an device template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a device user. *Synchronous*
 *
 * <b>Permissions Needed:</b> DEVICES_ADMIN or owner
 * \param id The id of the device *Required*
 * \param userId The user id of the device user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceUserSync(char * accessToken,
	std::string id, int userId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a device user. *Asynchronous*
 *
 * <b>Permissions Needed:</b> DEVICES_ADMIN or owner
 * \param id The id of the device *Required*
 * \param userId The user id of the device user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceUserAsync(char * accessToken,
	std::string id, int userId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete all device users. *Synchronous*
 *
 * <b>Permissions Needed:</b> DEVICES_ADMIN or owner
 * \param id The id of the device *Required*
 * \param filterId Filter for device users to delete with a user id in a given comma separated list of ids
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceUsersSync(char * accessToken,
	std::string id, std::string filterId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete all device users. *Asynchronous*
 *
 * <b>Permissions Needed:</b> DEVICES_ADMIN or owner
 * \param id The id of the device *Required*
 * \param filterId Filter for device users to delete with a user id in a given comma separated list of ids
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDeviceUsersAsync(char * accessToken,
	std::string id, std::string filterId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single device. *Synchronous*
 *
 * <b>Permissions Needed:</b> DEVICES_ADMIN or owner
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceSync(char * accessToken,
	std::string id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);

/*! \brief Get a single device. *Asynchronous*
 *
 * <b>Permissions Needed:</b> DEVICES_ADMIN or owner
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceAsync(char * accessToken,
	std::string id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);


/*! \brief Get a single device template. *Synchronous*
 *
 * <b>Permissions Needed:</b> description
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single device template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> description
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search device templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or DEVICES_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search device templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or DEVICES_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeviceTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief List and search devices. *Synchronous*
 *
 * Get a list of devices with optional filtering. <br><br><b>Permissions Needed:</b> DEVICES_ADMIN or user
 * \param filterMake Filter for devices with specified make
 * \param filterModel Filter for devices with specified model
 * \param filterOs Filter for devices with specified OS
 * \param filterSerial Filter for devices with specified serial
 * \param filterType Filter for devices with specified type
 * \param filterTag A comma separated list without spaces to filter for devices with specified tags (matches any)
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDevicesSync(char * accessToken,
	std::string filterMake, std::string filterModel, std::string filterOs, std::string filterSerial, std::string filterType, std::string filterTag, int size, int page, std::string order, 
	void(* handler)(PageResource«DeviceResource», Error, void* )
	, void* userData);

/*! \brief List and search devices. *Asynchronous*
 *
 * Get a list of devices with optional filtering. <br><br><b>Permissions Needed:</b> DEVICES_ADMIN or user
 * \param filterMake Filter for devices with specified make
 * \param filterModel Filter for devices with specified model
 * \param filterOs Filter for devices with specified OS
 * \param filterSerial Filter for devices with specified serial
 * \param filterType Filter for devices with specified type
 * \param filterTag A comma separated list without spaces to filter for devices with specified tags (matches any)
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDevicesAsync(char * accessToken,
	std::string filterMake, std::string filterModel, std::string filterOs, std::string filterSerial, std::string filterType, std::string filterTag, int size, int page, std::string order, 
	void(* handler)(PageResource«DeviceResource», Error, void* )
	, void* userData);


/*! \brief Update a device. *Synchronous*
 *
 * <b>Permissions Needed:</b> CUSTOMERS_ADMIN
 * \param device device *Required*
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDeviceSync(char * accessToken,
	DeviceResource device, std::string id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);

/*! \brief Update a device. *Asynchronous*
 *
 * <b>Permissions Needed:</b> CUSTOMERS_ADMIN
 * \param device device *Required*
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDeviceAsync(char * accessToken,
	DeviceResource device, std::string id, 
	void(* handler)(DeviceResource, Error, void* )
	, void* userData);


/*! \brief Update an device template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param deviceTemplateResource The device template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDeviceTemplateSync(char * accessToken,
	std::string id, TemplateResource deviceTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an device template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param deviceTemplateResource The device template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDeviceTemplateAsync(char * accessToken,
	std::string id, TemplateResource deviceTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* DevicesManager_H_ */
