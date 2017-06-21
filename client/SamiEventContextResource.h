/*
 * SamiEventContextResource.h
 * 
 * 
 */

#ifndef SamiEventContextResource_H_
#define SamiEventContextResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiExpressionResource.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiEventContextResource: public SamiObject {
public:
    SamiEventContextResource();
    SamiEventContextResource(String* json);
    virtual ~SamiEventContextResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiEventContextResource* fromJson(String* obj);

    String* getPEventName();
    void setPEventName(String* pEvent_name);
    HashMap* getPParameters();
    void setPParameters(HashMap* pParameters);
    String* getPType();
    void setPType(String* pType);

private:
    String* pEvent_name;
HashMap* pParameters;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiEventContextResource_H_ */
