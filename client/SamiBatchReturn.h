/*
 * SamiBatchReturn.h
 * 
 * 
 */

#ifndef SamiBatchReturn_H_
#define SamiBatchReturn_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiResult.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiBatchReturn: public SamiObject {
public:
    SamiBatchReturn();
    SamiBatchReturn(String* json);
    virtual ~SamiBatchReturn();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBatchReturn* fromJson(String* obj);

    SamiResult* getPBody();
    void setPBody(SamiResult* pBody);
    Integer* getPCode();
    void setPCode(Integer* pCode);
    String* getPUri();
    void setPUri(String* pUri);

private:
    SamiResult* pBody;
Integer* pCode;
String* pUri;
};

} /* namespace Swagger */

#endif /* SamiBatchReturn_H_ */
