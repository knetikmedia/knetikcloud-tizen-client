/*
 * SamiBatchRequest.h
 * 
 * 
 */

#ifndef SamiBatchRequest_H_
#define SamiBatchRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiBatchRequest: public SamiObject {
public:
    SamiBatchRequest();
    SamiBatchRequest(String* json);
    virtual ~SamiBatchRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBatchRequest* fromJson(String* obj);

    SamiObject* getPBody();
    void setPBody(SamiObject* pBody);
    String* getPContentType();
    void setPContentType(String* pContent_type);
    String* getPMethod();
    void setPMethod(String* pMethod);
    Integer* getPTimeout();
    void setPTimeout(Integer* pTimeout);
    String* getPToken();
    void setPToken(String* pToken);
    String* getPUri();
    void setPUri(String* pUri);

private:
    SamiObject* pBody;
String* pContent_type;
String* pMethod;
Integer* pTimeout;
String* pToken;
String* pUri;
};

} /* namespace Swagger */

#endif /* SamiBatchRequest_H_ */
