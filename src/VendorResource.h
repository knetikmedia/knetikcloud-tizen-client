/*
 * VendorResource.h
 *
 * 
 */

#ifndef _VendorResource_H_
#define _VendorResource_H_


#include <string>
#include "Property.h"
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

class VendorResource : public Object {
public:
	/*! \brief Constructor.
	 */
	VendorResource();
	VendorResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VendorResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the vendor is active.  Default = true
	 */
	bool getActive();

	/*! \brief Set Whether the vendor is active.  Default = true
	 */
	void setActive(bool  active);
	/*! \brief Get A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this user type, or be an extra not from the template
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this user type, or be an extra not from the template
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The date the vendor was added. Unix timestamp in seconds
	 */
	long long getCreateDate();

	/*! \brief Set The date the vendor was added. Unix timestamp in seconds
	 */
	void setCreateDate(long long  create_date);
	/*! \brief Get A description of the vendor
	 */
	std::string getDescription();

	/*! \brief Set A description of the vendor
	 */
	void setDescription(std::string  description);
	/*! \brief Get The id of the vendor
	 */
	int getId();

	/*! \brief Set The id of the vendor
	 */
	void setId(int  id);
	/*! \brief Get The url of an image for the vendor
	 */
	std::string getImageUrl();

	/*! \brief Set The url of an image for the vendor
	 */
	void setImageUrl(std::string  image_url);
	/*! \brief Get Whether the vendor needs to manually approve invoices before they are paid.  A separate checkout flow is required in this case.  Default: false
	 */
	bool getManualApproval();

	/*! \brief Set Whether the vendor needs to manually approve invoices before they are paid.  A separate checkout flow is required in this case.  Default: false
	 */
	void setManualApproval(bool  manual_approval);
	/*! \brief Get The name of the vendor
	 */
	std::string getName();

	/*! \brief Set The name of the vendor
	 */
	void setName(std::string  name);
	/*! \brief Get The primary email address for the vendor
	 */
	std::string getPrimaryContactEmail();

	/*! \brief Set The primary email address for the vendor
	 */
	void setPrimaryContactEmail(std::string  primary_contact_email);
	/*! \brief Get The name of the primary contact for the vendor
	 */
	std::string getPrimaryContactName();

	/*! \brief Set The name of the primary contact for the vendor
	 */
	void setPrimaryContactName(std::string  primary_contact_name);
	/*! \brief Get The primary phone number for the vendor
	 */
	std::string getPrimaryContactPhone();

	/*! \brief Set The primary phone number for the vendor
	 */
	void setPrimaryContactPhone(std::string  primary_contact_phone);
	/*! \brief Get The email address for sale inquiries for the vendor
	 */
	std::string getSalesEmail();

	/*! \brief Set The email address for sale inquiries for the vendor
	 */
	void setSalesEmail(std::string  sales_email);
	/*! \brief Get The email address for support inquiries for the vendor
	 */
	std::string getSupportEmail();

	/*! \brief Set The email address for support inquiries for the vendor
	 */
	void setSupportEmail(std::string  support_email);
	/*! \brief Get A user template this user is validated against (private). May be null and no validation of properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A user template this user is validated against (private). May be null and no validation of properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The date the vendor was last updated. Unix timestamp in seconds
	 */
	long long getUpdateDate();

	/*! \brief Set The date the vendor was last updated. Unix timestamp in seconds
	 */
	void setUpdateDate(long long  update_date);
	/*! \brief Get The url for the vendor's site
	 */
	std::string getUrl();

	/*! \brief Set The url for the vendor's site
	 */
	void setUrl(std::string  url);

private:
	bool active;
	std::map <std::string, std::string>additional_properties;
	long long create_date;
	std::string description;
	int id;
	std::string image_url;
	bool manual_approval;
	std::string name;
	std::string primary_contact_email;
	std::string primary_contact_name;
	std::string primary_contact_phone;
	std::string sales_email;
	std::string support_email;
	std::string _template;
	long long update_date;
	std::string url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VendorResource_H_ */
