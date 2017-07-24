/*
 * SamiTokenDetailsResource.h
 * 
 * 
 */

#ifndef SamiTokenDetailsResource_H_
#define SamiTokenDetailsResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiTokenDetailsResource: public SamiObject {
public:
    SamiTokenDetailsResource();
    SamiTokenDetailsResource(String* json);
    virtual ~SamiTokenDetailsResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTokenDetailsResource* fromJson(String* obj);

    String* getPClientId();
    void setPClientId(String* pClient_id);
    IList* getPRoles();
    void setPRoles(IList* pRoles);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);

private:
    String* pClient_id;
IList* pRoles;
Integer* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiTokenDetailsResource_H_ */
