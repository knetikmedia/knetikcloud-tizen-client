/*
 * ArtistResource.h
 *
 * 
 */

#ifndef _ArtistResource_H_
#define _ArtistResource_H_


#include <string>
#include "ContributionResource.h"
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

class ArtistResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ArtistResource();
	ArtistResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ArtistResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get YYYY/MM/DD when this artist was born
	 */
	std::string getBorn();

	/*! \brief Set YYYY/MM/DD when this artist was born
	 */
	void setBorn(std::string  born);
	/*! \brief Get The current number of contributions the artist has made
	 */
	int getContributionCount();

	/*! \brief Set The current number of contributions the artist has made
	 */
	void setContributionCount(int  contribution_count);
	/*! \brief Get The list of media this artist has contributed to as well as role(s) during contribution.  Use media endpoint to add contributions
	 */
	std::list<ContributionResource> getContributions();

	/*! \brief Set The list of media this artist has contributed to as well as role(s) during contribution.  Use media endpoint to add contributions
	 */
	void setContributions(std::list <ContributionResource> contributions);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get YYYY/MM/DD when this artist died
	 */
	std::string getDied();

	/*! \brief Set YYYY/MM/DD when this artist died
	 */
	void setDied(std::string  died);
	/*! \brief Get The unique ID for that resource
	 */
	long long getId();

	/*! \brief Set The unique ID for that resource
	 */
	void setId(long long  id);
	/*! \brief Get The user friendly name of that resource. Defaults to blank string
	 */
	std::string getLongDescription();

	/*! \brief Set The user friendly name of that resource. Defaults to blank string
	 */
	void setLongDescription(std::string  long_description);
	/*! \brief Get The user friendly name of that resource
	 */
	std::string getName();

	/*! \brief Set The user friendly name of that resource
	 */
	void setName(std::string  name);
	/*! \brief Get The sort order priority ofr the artist.  Default 100
	 */
	int getPriority();

	/*! \brief Set The sort order priority ofr the artist.  Default 100
	 */
	void setPriority(int  priority);
	/*! \brief Get The user friendly name of that resource. Defaults to blank string
	 */
	std::string getShortDescription();

	/*! \brief Set The user friendly name of that resource. Defaults to blank string
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get An artist template this artist is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set An artist template this artist is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	std::map <std::string, std::string>additional_properties;
	std::string born;
	int contribution_count;
	std::list <ContributionResource>contributions;
	long long created_date;
	std::string died;
	long long id;
	std::string long_description;
	std::string name;
	int priority;
	std::string short_description;
	std::string _template;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ArtistResource_H_ */
