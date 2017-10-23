/*
 * TemplatePushResource.h
 *
 * 
 */

#ifndef _TemplatePushResource_H_
#define _TemplatePushResource_H_


#include <string>
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

class TemplatePushResource : public Object {
public:
	/*! \brief Constructor.
	 */
	TemplatePushResource();
	TemplatePushResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TemplatePushResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A list of user ids to send the message to.
	 */
	std::list<int> getRecipients();

	/*! \brief Set A list of user ids to send the message to.
	 */
	void setRecipients(std::list <int> recipients);
	/*! \brief Get A mustache template
	 */
	std::string getTemplate();

	/*! \brief Set A mustache template
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get A map of values to fill in the template
	 */
	std::string getTemplateVars();

	/*! \brief Set A map of values to fill in the template
	 */
	void setTemplateVars(std::string  template_vars);

private:
	std::list <int>recipients;
	std::string _template;
	std::string template_vars;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TemplatePushResource_H_ */
