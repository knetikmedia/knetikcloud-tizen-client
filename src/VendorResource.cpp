#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VendorResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VendorResource::VendorResource()
{
	//__init();
}

VendorResource::~VendorResource()
{
	//__cleanup();
}

void
VendorResource::__init()
{
	//
	//
	//active = bool(false);
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//create_date = long(0);
	//
	//
	//description = std::string();
	//
	//
	//id = int(0);
	//
	//
	//image_url = std::string();
	//
	//
	//manual_approval = bool(false);
	//
	//
	//name = std::string();
	//
	//
	//primary_contact_email = std::string();
	//
	//
	//primary_contact_name = std::string();
	//
	//
	//primary_contact_phone = std::string();
	//
	//
	//sales_email = std::string();
	//
	//
	//support_email = std::string();
	//
	//
	//_template = std::string();
	//
	//
	//update_date = long(0);
	//
	//
	//url = std::string();
	//
}

void
VendorResource::__cleanup()
{
	//if(active != NULL) {
	//
	//delete active;
	//active = NULL;
	//}
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(create_date != NULL) {
	//
	//delete create_date;
	//create_date = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(image_url != NULL) {
	//
	//delete image_url;
	//image_url = NULL;
	//}
	//if(manual_approval != NULL) {
	//
	//delete manual_approval;
	//manual_approval = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(primary_contact_email != NULL) {
	//
	//delete primary_contact_email;
	//primary_contact_email = NULL;
	//}
	//if(primary_contact_name != NULL) {
	//
	//delete primary_contact_name;
	//primary_contact_name = NULL;
	//}
	//if(primary_contact_phone != NULL) {
	//
	//delete primary_contact_phone;
	//primary_contact_phone = NULL;
	//}
	//if(sales_email != NULL) {
	//
	//delete sales_email;
	//sales_email = NULL;
	//}
	//if(support_email != NULL) {
	//
	//delete support_email;
	//support_email = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//if(update_date != NULL) {
	//
	//delete update_date;
	//update_date = NULL;
	//}
	//if(url != NULL) {
	//
	//delete url;
	//url = NULL;
	//}
	//
}

void
VendorResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *activeKey = "active";
	node = json_object_get_member(pJsonObject, activeKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&active, node, "bool", "");
		} else {
			
		}
	}
	const gchar *additional_propertiesKey = "additional_properties";
	node = json_object_get_member(pJsonObject, additional_propertiesKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			additional_properties = new_map;
		}
		
	}
	const gchar *create_dateKey = "create_date";
	node = json_object_get_member(pJsonObject, create_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&create_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *image_urlKey = "image_url";
	node = json_object_get_member(pJsonObject, image_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&image_url, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *manual_approvalKey = "manual_approval";
	node = json_object_get_member(pJsonObject, manual_approvalKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&manual_approval, node, "bool", "");
		} else {
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *primary_contact_emailKey = "primary_contact_email";
	node = json_object_get_member(pJsonObject, primary_contact_emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&primary_contact_email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *primary_contact_nameKey = "primary_contact_name";
	node = json_object_get_member(pJsonObject, primary_contact_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&primary_contact_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *primary_contact_phoneKey = "primary_contact_phone";
	node = json_object_get_member(pJsonObject, primary_contact_phoneKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&primary_contact_phone, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sales_emailKey = "sales_email";
	node = json_object_get_member(pJsonObject, sales_emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sales_email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *support_emailKey = "support_email";
	node = json_object_get_member(pJsonObject, support_emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&support_email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *_templateKey = "template";
	node = json_object_get_member(pJsonObject, _templateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_template, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *update_dateKey = "update_date";
	node = json_object_get_member(pJsonObject, update_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&update_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *urlKey = "url";
	node = json_object_get_member(pJsonObject, urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&url, node, "std::string", "");
		} else {
			
		}
	}
}

VendorResource::VendorResource(char* json)
{
	this->fromJson(json);
}

char*
VendorResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getActive();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *activeKey = "active";
	json_object_set_member(pJsonObject, activeKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getAdditionalProperties());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *additional_propertiesKey = "additional_properties";
	json_object_set_member(pJsonObject, additional_propertiesKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreateDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *create_dateKey = "create_date";
	json_object_set_member(pJsonObject, create_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getImageUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *image_urlKey = "image_url";
	json_object_set_member(pJsonObject, image_urlKey, node);
	if (isprimitive("bool")) {
		bool obj = getManualApproval();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *manual_approvalKey = "manual_approval";
	json_object_set_member(pJsonObject, manual_approvalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPrimaryContactEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *primary_contact_emailKey = "primary_contact_email";
	json_object_set_member(pJsonObject, primary_contact_emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPrimaryContactName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *primary_contact_nameKey = "primary_contact_name";
	json_object_set_member(pJsonObject, primary_contact_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPrimaryContactPhone();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *primary_contact_phoneKey = "primary_contact_phone";
	json_object_set_member(pJsonObject, primary_contact_phoneKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSalesEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sales_emailKey = "sales_email";
	json_object_set_member(pJsonObject, sales_emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSupportEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *support_emailKey = "support_email";
	json_object_set_member(pJsonObject, support_emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdateDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *update_dateKey = "update_date";
	json_object_set_member(pJsonObject, update_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *urlKey = "url";
	json_object_set_member(pJsonObject, urlKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
VendorResource::getActive()
{
	return active;
}

void
VendorResource::setActive(bool  active)
{
	this->active = active;
}

std::map<string, string>
VendorResource::getAdditionalProperties()
{
	return additional_properties;
}

void
VendorResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

long long
VendorResource::getCreateDate()
{
	return create_date;
}

void
VendorResource::setCreateDate(long long  create_date)
{
	this->create_date = create_date;
}

std::string
VendorResource::getDescription()
{
	return description;
}

void
VendorResource::setDescription(std::string  description)
{
	this->description = description;
}

int
VendorResource::getId()
{
	return id;
}

void
VendorResource::setId(int  id)
{
	this->id = id;
}

std::string
VendorResource::getImageUrl()
{
	return image_url;
}

void
VendorResource::setImageUrl(std::string  image_url)
{
	this->image_url = image_url;
}

bool
VendorResource::getManualApproval()
{
	return manual_approval;
}

void
VendorResource::setManualApproval(bool  manual_approval)
{
	this->manual_approval = manual_approval;
}

std::string
VendorResource::getName()
{
	return name;
}

void
VendorResource::setName(std::string  name)
{
	this->name = name;
}

std::string
VendorResource::getPrimaryContactEmail()
{
	return primary_contact_email;
}

void
VendorResource::setPrimaryContactEmail(std::string  primary_contact_email)
{
	this->primary_contact_email = primary_contact_email;
}

std::string
VendorResource::getPrimaryContactName()
{
	return primary_contact_name;
}

void
VendorResource::setPrimaryContactName(std::string  primary_contact_name)
{
	this->primary_contact_name = primary_contact_name;
}

std::string
VendorResource::getPrimaryContactPhone()
{
	return primary_contact_phone;
}

void
VendorResource::setPrimaryContactPhone(std::string  primary_contact_phone)
{
	this->primary_contact_phone = primary_contact_phone;
}

std::string
VendorResource::getSalesEmail()
{
	return sales_email;
}

void
VendorResource::setSalesEmail(std::string  sales_email)
{
	this->sales_email = sales_email;
}

std::string
VendorResource::getSupportEmail()
{
	return support_email;
}

void
VendorResource::setSupportEmail(std::string  support_email)
{
	this->support_email = support_email;
}

std::string
VendorResource::getTemplate()
{
	return _template;
}

void
VendorResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

long long
VendorResource::getUpdateDate()
{
	return update_date;
}

void
VendorResource::setUpdateDate(long long  update_date)
{
	this->update_date = update_date;
}

std::string
VendorResource::getUrl()
{
	return url;
}

void
VendorResource::setUrl(std::string  url)
{
	this->url = url;
}


