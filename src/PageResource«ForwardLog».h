/*
 * PageResource«ForwardLog».h
 *
 * 
 */

#ifndef _PageResource«ForwardLog»_H_
#define _PageResource«ForwardLog»_H_


#include <string>
#include "ForwardLog.h"
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

class PageResource«ForwardLog» : public Object {
public:
	/*! \brief Constructor.
	 */
	PageResource«ForwardLog»();
	PageResource«ForwardLog»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PageResource«ForwardLog»();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<ForwardLog> getContent();

	/*! \brief Set 
	 */
	void setContent(std::list <ForwardLog> content);
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
	std::list <ForwardLog>content;
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

#endif /* _PageResource«ForwardLog»_H_ */
