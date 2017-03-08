/*
 * SamiVideo.h
 * 
 * 
 */

#ifndef SamiVideo_H_
#define SamiVideo_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiArtist.h"
#include "SamiCollection«VideoContribution».h"
#include "SamiUser.h"
#include "SamiVideoTag.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiVideo: public SamiObject {
public:
    SamiVideo();
    SamiVideo(String* json);
    virtual ~SamiVideo();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVideo* fromJson(String* obj);

    Boolean* getPActive();
    void setPActive(Boolean* pActive);
    SamiArtist* getPAuthor();
    void setPAuthor(SamiArtist* pAuthor);
    Long* getPAuthored();
    void setPAuthored(Long* pAuthored);
    Boolean* getPBanned();
    void setPBanned(Boolean* pBanned);
    String* getPCategoryId();
    void setPCategoryId(String* pCategory_id);
    String* getPCategoryName();
    void setPCategoryName(String* pCategory_name);
    SamiCollection«VideoContribution»* getPContributors();
    void setPContributors(SamiCollection«VideoContribution»* pContributors);
    Long* getPCreated();
    void setPCreated(Long* pCreated);
    String* getPEmbed();
    void setPEmbed(String* pEmbed);
    String* getPExtension();
    void setPExtension(String* pExtension);
    Integer* getPHeight();
    void setPHeight(Integer* pHeight);
    Long* getPId();
    void setPId(Long* pId);
    Integer* getPLength();
    void setPLength(Integer* pLength);
    String* getPLocation();
    void setPLocation(String* pLocation);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    String* getPMimeType();
    void setPMimeType(String* pMime_type);
    String* getPName();
    void setPName(String* pName);
    Integer* getPPriority();
    void setPPriority(Integer* pPriority);
    String* getPPrivacy();
    void setPPrivacy(String* pPrivacy);
    Boolean* getPPublished();
    void setPPublished(Boolean* pPublished);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    Long* getPSize();
    void setPSize(Long* pSize);
    IList* getPTags();
    void setPTags(IList* pTags);
    String* getPThumbnail();
    void setPThumbnail(String* pThumbnail);
    Long* getPUpdated();
    void setPUpdated(Long* pUpdated);
    SamiUser* getPUploader();
    void setPUploader(SamiUser* pUploader);
    Long* getPViews();
    void setPViews(Long* pViews);
    IList* getPWhitelist();
    void setPWhitelist(IList* pWhitelist);
    Integer* getPWidth();
    void setPWidth(Integer* pWidth);

private:
    Boolean* pActive;
SamiArtist* pAuthor;
Long* pAuthored;
Boolean* pBanned;
String* pCategory_id;
String* pCategory_name;
SamiCollection«VideoContribution»* pContributors;
Long* pCreated;
String* pEmbed;
String* pExtension;
Integer* pHeight;
Long* pId;
Integer* pLength;
String* pLocation;
String* pLong_description;
String* pMime_type;
String* pName;
Integer* pPriority;
String* pPrivacy;
Boolean* pPublished;
String* pShort_description;
Long* pSize;
IList* pTags;
String* pThumbnail;
Long* pUpdated;
SamiUser* pUploader;
Long* pViews;
IList* pWhitelist;
Integer* pWidth;
};

} /* namespace Swagger */

#endif /* SamiVideo_H_ */
