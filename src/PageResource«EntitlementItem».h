/*
 * PageResource«EntitlementItem».h
 *
 * 
 */

#ifndef _PageResource«EntitlementItem»_H_
#define _PageResource«EntitlementItem»_H_


#include <string>
#include "EntitlementItem.h"
#include "Order.h"
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

class PageResource«EntitlementItem» : public Object {
public:
	/*! \brief Constructor.
	 */
	PageResource«EntitlementItem»();
	PageResource«EntitlementItem»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PageResource«EntitlementItem»();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<EntitlementItem> getContent();

	/*! \brief Set 
	 */
	void setContent(std::list <EntitlementItem> content);
	/*! \brief Get 
	 */
	bool getFirst();

	/*! \brief Set 
	 */
	void setFirst(bool  first);
	/*! \brief Get 
	 */
	bool getLast();

	/*! \brief Set 
	 */
	void setLast(bool  last);
	/*! \brief Get 
	 */
	int getNumber();

	/*! \brief Set 
	 */
	void setNumber(int  number);
	/*! \brief Get 
	 */
	int getNumberOfElements();

	/*! \brief Set 
	 */
	void setNumberOfElements(int  number_of_elements);
	/*! \brief Get 
	 */
	int getSize();

	/*! \brief Set 
	 */
	void setSize(int  size);
	/*! \brief Get 
	 */
	std::list<Order> getSort();

	/*! \brief Set 
	 */
	void setSort(std::list <Order> sort);
	/*! \brief Get 
	 */
	long long getTotalElements();

	/*! \brief Set 
	 */
	void setTotalElements(long long  total_elements);
	/*! \brief Get 
	 */
	int getTotalPages();

	/*! \brief Set 
	 */
	void setTotalPages(int  total_pages);

private:
	std::list <EntitlementItem>content;
	bool first;
	bool last;
	int number;
	int number_of_elements;
	int size;
	std::list <Order>sort;
	long long total_elements;
	int total_pages;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PageResource«EntitlementItem»_H_ */
