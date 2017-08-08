/*
 * ContributionResource.h
 *
 * 
 */

#ifndef _ContributionResource_H_
#define _ContributionResource_H_


#include <string>
#include "SimpleReferenceResource«long».h"
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

class ContributionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ContributionResource();
	ContributionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ContributionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A reference to the contributing artist
	 */
	SimpleReferenceResource«long» getArtist();

	/*! \brief Set A reference to the contributing artist
	 */
	void setArtist(SimpleReferenceResource«long»  artist);
	/*! \brief Get A reference to the media being contributed to
	 */
	SimpleReferenceResource«long» getMedia();

	/*! \brief Set A reference to the media being contributed to
	 */
	void setMedia(SimpleReferenceResource«long»  media);
	/*! \brief Get The nature of the contribution (role of the artist as in 'producer', 'performer', etc)
	 */
	std::string getRole();

	/*! \brief Set The nature of the contribution (role of the artist as in 'producer', 'performer', etc)
	 */
	void setRole(std::string  role);

private:
	SimpleReferenceResource«long» artist;
	SimpleReferenceResource«long» media;
	std::string role;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ContributionResource_H_ */
