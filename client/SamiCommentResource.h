/*
 * SamiCommentResource.h
 * 
 * 
 */

#ifndef SamiCommentResource_H_
#define SamiCommentResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSimpleUserResource.h"
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiCommentResource: public SamiObject {
public:
    SamiCommentResource();
    SamiCommentResource(String* json);
    virtual ~SamiCommentResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCommentResource* fromJson(String* obj);

    String* getPContent();
    void setPContent(String* pContent);
    String* getPContext();
    void setPContext(String* pContext);
    Integer* getPContextId();
    void setPContextId(Integer* pContext_id);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Long* getPId();
    void setPId(Long* pId);
    String* getPSummary();
    void setPSummary(String* pSummary);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);

private:
    String* pContent;
String* pContext;
Integer* pContext_id;
Long* pCreated_date;
Long* pId;
String* pSummary;
Long* pUpdated_date;
SamiSimpleUserResource* pUser;
};

} /* namespace Swagger */

#endif /* SamiCommentResource_H_ */
