/*
 * SamiCommentSearch.h
 * 
 * 
 */

#ifndef SamiCommentSearch_H_
#define SamiCommentSearch_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiCommentSearch: public SamiObject {
public:
    SamiCommentSearch();
    SamiCommentSearch(String* json);
    virtual ~SamiCommentSearch();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCommentSearch* fromJson(String* obj);

    String* getPContent();
    void setPContent(String* pContent);
    String* getPContext();
    void setPContext(String* pContext);
    Integer* getPContextId();
    void setPContextId(Integer* pContext_id);
    Long* getPId();
    void setPId(Long* pId);
    Integer* getPOwnerId();
    void setPOwnerId(Integer* pOwner_id);
    String* getPOwnerUsername();
    void setPOwnerUsername(String* pOwner_username);

private:
    String* pContent;
String* pContext;
Integer* pContext_id;
Long* pId;
Integer* pOwner_id;
String* pOwner_username;
};

} /* namespace Swagger */

#endif /* SamiCommentSearch_H_ */
