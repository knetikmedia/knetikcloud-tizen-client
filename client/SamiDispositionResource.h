/*
 * SamiDispositionResource.h
 * 
 * 
 */

#ifndef SamiDispositionResource_H_
#define SamiDispositionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiSimpleUserResource.h"
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiDispositionResource: public SamiObject {
public:
    SamiDispositionResource();
    SamiDispositionResource(String* json);
    virtual ~SamiDispositionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDispositionResource* fromJson(String* obj);

    String* getPContext();
    void setPContext(String* pContext);
    String* getPContextId();
    void setPContextId(String* pContext_id);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Long* getPId();
    void setPId(Long* pId);
    String* getPName();
    void setPName(String* pName);
    SamiSimpleUserResource* getPUser();
    void setPUser(SamiSimpleUserResource* pUser);

private:
    String* pContext;
String* pContext_id;
Long* pCreated_date;
Long* pId;
String* pName;
SamiSimpleUserResource* pUser;
};

} /* namespace Swagger */

#endif /* SamiDispositionResource_H_ */
