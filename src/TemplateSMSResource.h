/*
 * TemplateSMSResource.h
 *
 * 
 */

#ifndef _TemplateSMSResource_H_
#define _TemplateSMSResource_H_


#include <string>
#include "Localizer.h"
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

class TemplateSMSResource : public Object {
public:
	/*! \brief Constructor.
	 */
	TemplateSMSResource();
	TemplateSMSResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TemplateSMSResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The phone number to attribute the outgoing message to. Optional if the config text.out_number is set.
	 */
	std::string getFrom();

	/*! \brief Set The phone number to attribute the outgoing message to. Optional if the config text.out_number is set.
	 */
	void setFrom(std::string  from);
	/*! \brief Get 
	 */
	Localizer getLocalizer();

	/*! \brief Set 
	 */
	void setLocalizer(Localizer  localizer);
	/*! \brief Get A list of user ids to send the message to.
	 */
	std::list<int> getRecipients();

	/*! \brief Set A list of user ids to send the message to.
	 */
	void setRecipients(std::list <int> recipients);
	/*! \brief Get The key for the template.
	 */
	std::string getTemplateKey();

	/*! \brief Set The key for the template.
	 */
	void setTemplateKey(std::string  template_key);
	/*! \brief Get A list of values to fill in the template. Order matters.
	 */
	std::list<std::string> getTemplateVars();

	/*! \brief Set A list of values to fill in the template. Order matters.
	 */
	void setTemplateVars(std::list <std::string> template_vars);

private:
	std::string from;
	Localizer localizer;
	std::list <int>recipients;
	std::string template_key;
	std::list <std::string>template_vars;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TemplateSMSResource_H_ */
