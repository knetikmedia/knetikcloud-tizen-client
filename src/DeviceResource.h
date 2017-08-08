/*
 * DeviceResource.h
 *
 * 
 */

#ifndef _DeviceResource_H_
#define _DeviceResource_H_


#include <string>
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

class DeviceResource : public Object {
public:
	/*! \brief Constructor.
	 */
	DeviceResource();
	DeviceResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DeviceResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The authorization code for the device
	 */
	std::string getAuthorization();

	/*! \brief Set The authorization code for the device
	 */
	void setAuthorization(std::string  authorization);
	/*! \brief Get The current condition of the device (New, Defective, Reconditioned)
	 */
	std::string getCondition();

	/*! \brief Set The current condition of the device (New, Defective, Reconditioned)
	 */
	void setCondition(std::string  condition);
	/*! \brief Get The date the device log was created
	 */
	long long getCreatedDate();

	/*! \brief Set The date the device log was created
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The key/value pairs for extended data
	 */
	std::map<std::string, std::string> getData();

	/*! \brief Set The key/value pairs for extended data
	 */
	void setData(std::map <std::string, std::string> data);
	/*! \brief Get The description of the device
	 */
	std::string getDescription();

	/*! \brief Set The description of the device
	 */
	void setDescription(std::string  description);
	/*! \brief Get The type of the device
	 */
	std::string getDeviceType();

	/*! \brief Set The type of the device
	 */
	void setDeviceType(std::string  device_type);
	/*! \brief Get The unique ID for this device. Cannot be changed once created
	 */
	int getId();

	/*! \brief Set The unique ID for this device. Cannot be changed once created
	 */
	void setId(int  id);
	/*! \brief Get The location of the device
	 */
	std::string getLocation();

	/*! \brief Set The location of the device
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
	/*! \brief Get The serial number of the device
	 */
	std::string getSerial();

	/*! \brief Set The serial number of the device
	 */
	void setSerial(std::string  serial);
	/*! \brief Get The current status the device (Active, Pending Active, Inactive, Repair
	 */
	std::string getStatus();

	/*! \brief Set The current status the device (Active, Pending Active, Inactive, Repair
	 */
	void setStatus(std::string  status);
	/*! \brief Get The date the device log was updated
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the device log was updated
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The user that owns the device
	 */
	SimpleUserResource getUser();

	/*! \brief Set The user that owns the device
	 */
	void setUser(SimpleUserResource  user);
	/*! \brief Get The users currently using the device
	 */
	std::list<SimpleUserResource> getUsers();

	/*! \brief Set The users currently using the device
	 */
	void setUsers(std::list <SimpleUserResource> users);

private:
	std::string authorization;
	std::string condition;
	long long created_date;
	std::map <std::string, std::string>data;
	std::string description;
	std::string device_type;
	int id;
	std::string location;
	std::string mac_address;
	std::string make;
	std::string model;
	std::string name;
	std::string os;
	std::string serial;
	std::string status;
	long long updated_date;
	SimpleUserResource user;
	std::list <SimpleUserResource>users;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DeviceResource_H_ */
