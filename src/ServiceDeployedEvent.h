/*
 * ServiceDeployedEvent.h
 *
 * 
 */

#ifndef _ServiceDeployedEvent_H_
#define _ServiceDeployedEvent_H_


#include <string>
#include "BreTriggerResource.h"
#include "BroadcastableEvent.h"
#include "ResourceTypeDescription.h"
#include <list>
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

class ServiceDeployedEvent : public Object {
public:
	/*! \brief Constructor.
	 */
	ServiceDeployedEvent();
	ServiceDeployedEvent(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServiceDeployedEvent();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getClient();

	/*! \brief Set 
	 */
	void setClient(std::string  client);
	/*! \brief Get 
	 */
	std::string getCustomer();

	/*! \brief Set 
	 */
	void setCustomer(std::string  customer);
	/*! \brief Get 
	 */
	bool getDoNotBroadcast();

	/*! \brief Set 
	 */
	void setDoNotBroadcast(bool  do_not_broadcast);
	/*! \brief Get 
	 */
	std::string getSection();

	/*! \brief Set 
	 */
	void setSection(std::string  section);
	/*! \brief Get 
	 */
	std::string getSource();

	/*! \brief Set 
	 */
	void setSource(std::string  source);
	/*! \brief Get 
	 */
	std::string getSpecifics();

	/*! \brief Set 
	 */
	void setSpecifics(std::string  specifics);
	/*! \brief Get 
	 */
	bool getSynchronous();

	/*! \brief Set 
	 */
	void setSynchronous(bool  synchronous);
	/*! \brief Get 
	 */
	long long getTimestamp();

	/*! \brief Set 
	 */
	void setTimestamp(long long  timestamp);
	/*! \brief Get The type of the event. Used for polymorphic type recognition and thus must match an expected type
	 */
	std::string getType();

	/*! \brief Set The type of the event. Used for polymorphic type recognition and thus must match an expected type
	 */
	void setType(std::string  type);
	/*! \brief Get The events fired by this service
	 */
	std::list<BreTriggerResource> getEvents();

	/*! \brief Set The events fired by this service
	 */
	void setEvents(std::list <BreTriggerResource> events);
	/*! \brief Get The resources managed by this service
	 */
	std::list<ResourceTypeDescription> getResources();

	/*! \brief Set The resources managed by this service
	 */
	void setResources(std::list <ResourceTypeDescription> resources);
	/*! \brief Get The unique name for the service. This serves as the unique identifier. Cannot be changed after creation
	 */
	std::string getServiceName();

	/*! \brief Set The unique name for the service. This serves as the unique identifier. Cannot be changed after creation
	 */
	void setServiceName(std::string  service_name);
	/*! \brief Get The url of the swagger doc
	 */
	std::string getSwaggerUrl();

	/*! \brief Set The url of the swagger doc
	 */
	void setSwaggerUrl(std::string  swagger_url);

private:
	std::string client;
	std::string customer;
	bool do_not_broadcast;
	std::string section;
	std::string source;
	std::string specifics;
	bool synchronous;
	long long timestamp;
	std::string type;
	std::list <BreTriggerResource>events;
	std::list <ResourceTypeDescription>resources;
	std::string service_name;
	std::string swagger_url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServiceDeployedEvent_H_ */
