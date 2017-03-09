/*
 * SamiVideoResource.h
 * 
 * 
 */

#ifndef SamiVideoResource_H_
#define SamiVideoResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCommentResource.h"
#include "SamiContributionResource.h"
#include "SamiSimpleReferenceResource«long».h"
#include "SamiSimpleReferenceResource«string».h"
#include "SamiSimpleUserResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiVideoResource: public SamiObject {
public:
    SamiVideoResource();
    SamiVideoResource(String* json);
    virtual ~SamiVideoResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVideoResource* fromJson(String* obj);

    Boolean* getPActive();
    void setPActive(Boolean* pActive);
    SamiSimpleReferenceResource«long»* getPAuthor();
    void setPAuthor(SamiSimpleReferenceResource«long»* pAuthor);
    Long* getPAuthored();
    void setPAuthored(Long* pAuthored);
    Boolean* getPBanned();
    void setPBanned(Boolean* pBanned);
    SamiSimpleReferenceResource«string»* getPCategory();
    void setPCategory(SamiSimpleReferenceResource«string»* pCategory);
    IList* getPComments();
    void setPComments(IList* pComments);
    IList* getPContributors();
    void setPContributors(IList* pContributors);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
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
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    SamiSimpleUserResource* getPUploader();
    void setPUploader(SamiSimpleUserResource* pUploader);
    Long* getPViews();
    void setPViews(Long* pViews);
    Integer* getPWidth();
    void setPWidth(Integer* pWidth);

private:
    Boolean* pActive;
SamiSimpleReferenceResource«long»* pAuthor;
Long* pAuthored;
Boolean* pBanned;
SamiSimpleReferenceResource«string»* pCategory;
IList* pComments;
IList* pContributors;
Long* pCreated_date;
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
Long* pUpdated_date;
SamiSimpleUserResource* pUploader;
Long* pViews;
Integer* pWidth;
};

} /* namespace Swagger */

#endif /* SamiVideoResource_H_ */
