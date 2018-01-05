/*
 * VideoResource.h
 *
 * 
 */

#ifndef _VideoResource_H_
#define _VideoResource_H_


#include <string>
#include "CommentResource.h"
#include "ContributionResource.h"
#include "Property.h"
#include "SimpleReferenceResource«long».h"
#include "SimpleReferenceResource«string».h"
#include "SimpleUserResource.h"
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

class VideoResource : public Object {
public:
	/*! \brief Constructor.
	 */
	VideoResource();
	VideoResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VideoResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the video is available, based on various factors
	 */
	bool getActive();

	/*! \brief Set Whether the video is available, based on various factors
	 */
	void setActive(bool  active);
	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The original artist of the media
	 */
	SimpleReferenceResource«long» getAuthor();

	/*! \brief Set The original artist of the media
	 */
	void setAuthor(SimpleReferenceResource«long»  author);
	/*! \brief Get The date the media was created as a unix timestamp in seconds
	 */
	long long getAuthored();

	/*! \brief Set The date the media was created as a unix timestamp in seconds
	 */
	void setAuthored(long long  authored);
	/*! \brief Get Whether the video has been banned or not
	 */
	bool getBanned();

	/*! \brief Set Whether the video has been banned or not
	 */
	void setBanned(bool  banned);
	/*! \brief Get The category of the video
	 */
	SimpleReferenceResource«string» getCategory();

	/*! \brief Set The category of the video
	 */
	void setCategory(SimpleReferenceResource«string»  category);
	/*! \brief Get The comments of the video
	 */
	std::list<CommentResource> getComments();

	/*! \brief Set The comments of the video
	 */
	void setComments(std::list <CommentResource> comments);
	/*! \brief Get Artists that contributed to the creation. See separate endpoint to add to list
	 */
	std::list<ContributionResource> getContributors();

	/*! \brief Set Artists that contributed to the creation. See separate endpoint to add to list
	 */
	void setContributors(std::list <ContributionResource> contributors);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The country of an embedable version
	 */
	std::string getEmbed();

	/*! \brief Set The country of an embedable version
	 */
	void setEmbed(std::string  embed);
	/*! \brief Get The file extension of the media file. 1-5 characters
	 */
	std::string getExtension();

	/*! \brief Set The file extension of the media file. 1-5 characters
	 */
	void setExtension(std::string  extension);
	/*! \brief Get The height of the video in px
	 */
	int getHeight();

	/*! \brief Set The height of the video in px
	 */
	void setHeight(int  height);
	/*! \brief Get The unique ID for that resource
	 */
	long long getId();

	/*! \brief Set The unique ID for that resource
	 */
	void setId(long long  id);
	/*! \brief Get The length of the video in seconds
	 */
	int getLength();

	/*! \brief Set The length of the video in seconds
	 */
	void setLength(int  length);
	/*! \brief Get The country of the media. Typically a url. Cannot be blank
	 */
	std::string getLocation();

	/*! \brief Set The country of the media. Typically a url. Cannot be blank
	 */
	void setLocation(std::string  location);
	/*! \brief Get The user friendly name of that resource. Defaults to blank string
	 */
	std::string getLongDescription();

	/*! \brief Set The user friendly name of that resource. Defaults to blank string
	 */
	void setLongDescription(std::string  long_description);
	/*! \brief Get The mime-type of the media
	 */
	std::string getMimeType();

	/*! \brief Set The mime-type of the media
	 */
	void setMimeType(std::string  mime_type);
	/*! \brief Get The user friendly name of that resource
	 */
	std::string getName();

	/*! \brief Set The user friendly name of that resource
	 */
	void setName(std::string  name);
	/*! \brief Get The sort order of the video. default: 100
	 */
	int getPriority();

	/*! \brief Set The sort order of the video. default: 100
	 */
	void setPriority(int  priority);
	/*! \brief Get The privacy setting. default: private
	 */
	std::string getPrivacy();

	/*! \brief Set The privacy setting. default: private
	 */
	void setPrivacy(std::string  privacy);
	/*! \brief Get Whether the video has been made public. Default true
	 */
	bool getPublished();

	/*! \brief Set Whether the video has been made public. Default true
	 */
	void setPublished(bool  published);
	/*! \brief Get The user friendly name of that resource. Defaults to blank string
	 */
	std::string getShortDescription();

	/*! \brief Set The user friendly name of that resource. Defaults to blank string
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get The size of the media. Minimum 0 if supplied
	 */
	long long getSize();

	/*! \brief Set The size of the media. Minimum 0 if supplied
	 */
	void setSize(long long  size);
	/*! \brief Get The tags for the video
	 */
	std::list<std::string> getTags();

	/*! \brief Set The tags for the video
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get A video template this video is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A video template this video is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The country of a thumbnail version. Typically a url
	 */
	std::string getThumbnail();

	/*! \brief Set The country of a thumbnail version. Typically a url
	 */
	void setThumbnail(std::string  thumbnail);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);
	/*! \brief Get The user the media was uploaded by. May be null for system uploaded media. May only be set to a user other than the current caller if VIDEOS_ADMIN permission. Null will mean the caller is the uploader unless the caller has VIDEOS_ADMIN permission, in which case it will be set to null
	 */
	SimpleUserResource getUploader();

	/*! \brief Set The user the media was uploaded by. May be null for system uploaded media. May only be set to a user other than the current caller if VIDEOS_ADMIN permission. Null will mean the caller is the uploader unless the caller has VIDEOS_ADMIN permission, in which case it will be set to null
	 */
	void setUploader(SimpleUserResource  uploader);
	/*! \brief Get The view count of the video
	 */
	long long getViews();

	/*! \brief Set The view count of the video
	 */
	void setViews(long long  views);
	/*! \brief Get The width of the video in px
	 */
	int getWidth();

	/*! \brief Set The width of the video in px
	 */
	void setWidth(int  width);

private:
	bool active;
	std::map <std::string, std::string>additional_properties;
	SimpleReferenceResource«long» author;
	long long authored;
	bool banned;
	SimpleReferenceResource«string» category;
	std::list <CommentResource>comments;
	std::list <ContributionResource>contributors;
	long long created_date;
	std::string embed;
	std::string extension;
	int height;
	long long id;
	int length;
	std::string location;
	std::string long_description;
	std::string mime_type;
	std::string name;
	int priority;
	std::string privacy;
	bool published;
	std::string short_description;
	long long size;
	std::list <std::string>tags;
	std::string _template;
	std::string thumbnail;
	long long updated_date;
	SimpleUserResource uploader;
	long long views;
	int width;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VideoResource_H_ */
