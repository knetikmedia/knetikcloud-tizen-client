/*
 * SamiClientResource.h
 * 
 * 
 */

#ifndef SamiClientResource_H_
#define SamiClientResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiClientResource: public SamiObject {
public:
    SamiClientResource();
    SamiClientResource(String* json);
    virtual ~SamiClientResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiClientResource* fromJson(String* obj);

    Integer* getPAccessTokenValiditySeconds();
    void setPAccessTokenValiditySeconds(Integer* pAccess_token_validity_seconds);
    String* getPClientKey();
    void setPClientKey(String* pClient_key);
    IList* getPGrantTypes();
    void setPGrantTypes(IList* pGrant_types);
    Integer* getPId();
    void setPId(Integer* pId);
    Boolean* getPIsPublic();
    void setPIsPublic(Boolean* pIs_public);
    Boolean* getPLocked();
    void setPLocked(Boolean* pLocked);
    String* getPName();
    void setPName(String* pName);
    IList* getPRedirectUris();
    void setPRedirectUris(IList* pRedirect_uris);
    Integer* getPRefreshTokenValiditySeconds();
    void setPRefreshTokenValiditySeconds(Integer* pRefresh_token_validity_seconds);
    String* getPSecret();
    void setPSecret(String* pSecret);

private:
    Integer* pAccess_token_validity_seconds;
String* pClient_key;
IList* pGrant_types;
Integer* pId;
Boolean* pIs_public;
Boolean* pLocked;
String* pName;
IList* pRedirect_uris;
Integer* pRefresh_token_validity_seconds;
String* pSecret;
};

} /* namespace Swagger */

#endif /* SamiClientResource_H_ */
