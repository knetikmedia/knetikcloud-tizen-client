/*
 * ImportJobResource.h
 *
 * 
 */

#ifndef _ImportJobResource_H_
#define _ImportJobResource_H_


#include <string>
#include "ImportJobOutputResource.h"
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

class ImportJobResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ImportJobResource();
	ImportJobResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ImportJobResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the category to assign all questions in the import to
	 */
	std::string getCategoryId();

	/*! \brief Set The id of the category to assign all questions in the import to
	 */
	void setCategoryId(std::string  category_id);
	/*! \brief Get The date the job was created in seconds since unix epoc
	 */
	long long getCreatedDate();

	/*! \brief Set The date the job was created in seconds since unix epoc
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The id of the job
	 */
	long long getId();

	/*! \brief Set The id of the job
	 */
	void setId(long long  id);
	/*! \brief Get A name for this import for later reference
	 */
	std::string getName();

	/*! \brief Set A name for this import for later reference
	 */
	void setName(std::string  name);
	/*! \brief Get Error information from validation
	 */
	std::list<ImportJobOutputResource> getOutput();

	/*! \brief Set Error information from validation
	 */
	void setOutput(std::list <ImportJobOutputResource> output);
	/*! \brief Get The number of questions form the CSV file. Filled in after validation
	 */
	long long getRecordCount();

	/*! \brief Set The number of questions form the CSV file. Filled in after validation
	 */
	void setRecordCount(long long  record_count);
	/*! \brief Get The status of the job
	 */
	std::string getStatus();

	/*! \brief Set The status of the job
	 */
	void setStatus(std::string  status);
	/*! \brief Get The date the job was last updated in seconds since unix epoc
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the job was last updated in seconds since unix epoc
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The url of a CSV file to pull trivia questions from. Cannot be changed after initial POST
	 */
	std::string getUrl();

	/*! \brief Set The url of a CSV file to pull trivia questions from. Cannot be changed after initial POST
	 */
	void setUrl(std::string  url);
	/*! \brief Get The vendor who supplied this set of questions
	 */
	std::string getVendor();

	/*! \brief Set The vendor who supplied this set of questions
	 */
	void setVendor(std::string  vendor);

private:
	std::string category_id;
	long long created_date;
	long long id;
	std::string name;
	std::list <ImportJobOutputResource>output;
	long long record_count;
	std::string status;
	long long updated_date;
	std::string url;
	std::string vendor;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ImportJobResource_H_ */
