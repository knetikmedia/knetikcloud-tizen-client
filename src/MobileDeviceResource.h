/*
 * MobileDeviceResource.h
 *
 * 
 */

#ifndef _MobileDeviceResource_H_
#define _MobileDeviceResource_H_


#include <string>
#include "DeviceResource.h"
#include "Property.h"
#include "SimpleUserResource.h"
#include <list>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class MobileDeviceResource : public Object {
public:
	/*! \brief Constructor.
	 */
	MobileDeviceResource();
	MobileDeviceResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MobileDeviceResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template if one is specified
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template if one is specified
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The date the device log was created
	 */
	long long getCreatedDate();

	/*! \brief Set The date the device log was created
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The description of the device
	 */
	std::string getDescription();

	/*! \brief Set The description of the device
	 */
	void setDescription(std::string  description);
	/*! \brief Get The type of device. Use mobile_device to specifically register mobile devices. This particular type will be used to send and receive notifications
	 */
	std::string getDeviceType();

	/*! \brief Set The type of device. Use mobile_device to specifically register mobile devices. This particular type will be used to send and receive notifications
	 */
	void setDeviceType(std::string  device_type);
	/*! \brief Get The unique ID for this device. Cannot be changed after creation. Default: random
	 */
	std::string getId();

	/*! \brief Set The unique ID for this device. Cannot be changed after creation. Default: random
	 */
	void setId(std::string  id);
	/*! \brief Get The physical location of the device, coordinates or named place (office, living room, etc)
	 */
	std::string getLocation();

	/*! \brief Set The physical location of the device, coordinates or named place (office, living room, etc)
	 */
	void setLocation(std::string  location);
	/*! \brief Get The MAC (media access control) address of the device
	 */
	std::string getMacAddress();

	/*! \brief Set The MAC (media access control) address of the device
	 */
	void setMacAddress(std::string  mac_address);
	/*! \brief Get The make of the device
	 */
	std::string getMake();

	/*! \brief Set The make of the device
	 */
	void setMake(std::string  make);
	/*! \brief Get The model of the device
	 */
	std::string getModel();

	/*! \brief Set The model of the device
	 */
	void setModel(std::string  model);
	/*! \brief Get The name of the device
	 */
	std::string getName();

	/*! \brief Set The name of the device
	 */
	void setName(std::string  name);
	/*! \brief Get The OS (operating system) on the device
	 */
	std::string getOs();

	/*! \brief Set The OS (operating system) on the device
	 */
	void setOs(std::string  os);
	/*! \brief Get The user that owns the device
	 */
	SimpleUserResource getOwner();

	/*! \brief Set The user that owns the device
	 */
	void setOwner(SimpleUserResource  owner);
	/*! \brief Get The serial number of the device
	 */
	std::string getSerial();

	/*! \brief Set The serial number of the device
	 */
	void setSerial(std::string  serial);
	/*! \brief Get Random tags to facilitate search
	 */
	std::list<std::string> getTags();

	/*! \brief Set Random tags to facilitate search
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get Use to describe and validate custom properties (custom schema). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set Use to describe and validate custom properties (custom schema). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The date the device log was updated
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the device log was updated
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The users currently using the device
	 */
	std::list<SimpleUserResource> getUsers();

	/*! \brief Set The users currently using the device
	 */
	void setUsers(std::list <SimpleUserResource> users);
	/*! \brief Get The authorization code for push notifications provided by the provider platform (APNS, GCM, etc).
	 */
	std::string getAuthorization();

	/*! \brief Set The authorization code for push notifications provided by the provider platform (APNS, GCM, etc).
	 */
	void setAuthorization(std::string  authorization);
	/*! \brief Get 
	 */
	std::string getImei();

	/*! \brief Set 
	 */
	void setImei(std::string  imei);
	/*! \brief Get The platform used for push notifications. Only Apple and Android are supported at the moment.
	 */
	std::string getNotificationPlatform();

	/*! \brief Set The platform used for push notifications. Only Apple and Android are supported at the moment.
	 */
	void setNotificationPlatform(std::string  notification_platform);
	/*! \brief Get The phone number associated with this device if applicable, in international format
	 */
	std::string getNumber();

	/*! \brief Set The phone number associated with this device if applicable, in international format
	 */
	void setNumber(std::string  number);

private:
	std::map <std::string, std::string>additional_properties;
	long long created_date;
	std::string description;
	std::string device_type;
	std::string id;
	std::string location;
	std::string mac_address;
	std::string make;
	std::string model;
	std::string name;
	std::string os;
	SimpleUserResource owner;
	std::string serial;
	std::list <std::string>tags;
	std::string _template;
	long long updated_date;
	std::list <SimpleUserResource>users;
	std::string authorization;
	std::string imei;
	std::string notification_platform;
	std::string number;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MobileDeviceResource_H_ */
