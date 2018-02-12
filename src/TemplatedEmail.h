/*
 * TemplatedEmail.h
 *
 * 
 */

#ifndef _TemplatedEmail_H_
#define _TemplatedEmail_H_


#include <string>
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

class TemplatedEmail : public Object {
public:
	/*! \brief Constructor.
	 */
	TemplatedEmail();
	TemplatedEmail(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TemplatedEmail();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The external template ID used by the email provider
	 */
	std::string getExternalTemplateId();

	/*! \brief Set The external template ID used by the email provider
	 */
	void setExternalTemplateId(std::string  external_template_id);
	/*! \brief Get The map of data used by the template
	 */
	std::string getTemplateData();

	/*! \brief Set The map of data used by the template
	 */
	void setTemplateData(std::string  template_data);

private:
	std::string external_template_id;
	std::string template_data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TemplatedEmail_H_ */
