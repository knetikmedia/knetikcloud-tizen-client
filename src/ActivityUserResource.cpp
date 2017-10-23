#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActivityUserResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActivityUserResource::ActivityUserResource()
{
	//__init();
}

ActivityUserResource::~ActivityUserResource()
{
	//__cleanup();
}

void
ActivityUserResource::__init()
{
	//
	//
	//host = bool(false);
	//
	//
	//id = long(0);
	//
	//
	//joined_date = long(0);
	//
	//
	//left_date = long(0);
	//
	//
	//metric = new MetricResource();
	//
	//
	//status = std::string();
	//
	//
	//user = new SimpleUserResource();
	//
}

void
ActivityUserResource::__cleanup()
{
	//if(host != NULL) {
	//
	//delete host;
	//host = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(joined_date != NULL) {
	//
	//delete joined_date;
	//joined_date = NULL;
	//}
	//if(left_date != NULL) {
	//
	//delete left_date;
	//left_date = NULL;
	//}
	//if(metric != NULL) {
	//
	//delete metric;
	//metric = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
ActivityUserResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *hostKey = "host";
	node = json_object_get_member(pJsonObject, hostKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&host, node, "bool", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *joined_dateKey = "joined_date";
	node = json_object_get_member(pJsonObject, joined_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&joined_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *left_dateKey = "left_date";
	node = json_object_get_member(pJsonObject, left_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&left_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *metricKey = "metric";
	node = json_object_get_member(pJsonObject, metricKey);
	if (node !=NULL) {
	

		if (isprimitive("MetricResource")) {
			jsonToValue(&metric, node, "MetricResource", "MetricResource");
		} else {
			
			MetricResource* obj = static_cast<MetricResource*> (&metric);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&user, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&user);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ActivityUserResource::ActivityUserResource(char* json)
{
	this->fromJson(json);
}

char*
ActivityUserResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getHost();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *hostKey = "host";
	json_object_set_member(pJsonObject, hostKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("long long")) {
		long long obj = getJoinedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *joined_dateKey = "joined_date";
	json_object_set_member(pJsonObject, joined_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getLeftDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *left_dateKey = "left_date";
	json_object_set_member(pJsonObject, left_dateKey, node);
	if (isprimitive("MetricResource")) {
		MetricResource obj = getMetric();
		node = converttoJson(&obj, "MetricResource", "");
	}
	else {
		
		MetricResource obj = static_cast<MetricResource> (getMetric());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *metricKey = "metric";
	json_object_set_member(pJsonObject, metricKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getUser();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getUser());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
ActivityUserResource::getHost()
{
	return host;
}

void
ActivityUserResource::setHost(bool  host)
{
	this->host = host;
}

long long
ActivityUserResource::getId()
{
	return id;
}

void
ActivityUserResource::setId(long long  id)
{
	this->id = id;
}

long long
ActivityUserResource::getJoinedDate()
{
	return joined_date;
}

void
ActivityUserResource::setJoinedDate(long long  joined_date)
{
	this->joined_date = joined_date;
}

long long
ActivityUserResource::getLeftDate()
{
	return left_date;
}

void
ActivityUserResource::setLeftDate(long long  left_date)
{
	this->left_date = left_date;
}

MetricResource
ActivityUserResource::getMetric()
{
	return metric;
}

void
ActivityUserResource::setMetric(MetricResource  metric)
{
	this->metric = metric;
}

std::string
ActivityUserResource::getStatus()
{
	return status;
}

void
ActivityUserResource::setStatus(std::string  status)
{
	this->status = status;
}

SimpleUserResource
ActivityUserResource::getUser()
{
	return user;
}

void
ActivityUserResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}


