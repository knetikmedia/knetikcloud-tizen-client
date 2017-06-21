/*
 * SamiGlobalCheckAndIncrementResource.h
 * 
 * 
 */

#ifndef SamiGlobalCheckAndIncrementResource_H_
#define SamiGlobalCheckAndIncrementResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiExpressionResource.h"
using Tizen::Base::String;


namespace Swagger {

class SamiGlobalCheckAndIncrementResource: public SamiObject {
public:
    SamiGlobalCheckAndIncrementResource();
    SamiGlobalCheckAndIncrementResource(String* json);
    virtual ~SamiGlobalCheckAndIncrementResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGlobalCheckAndIncrementResource* fromJson(String* obj);

    SamiExpressionResource* getPCheckValueResource();
    void setPCheckValueResource(SamiExpressionResource* pCheck_value_resource);
    SamiExpressionResource* getPGlobalResource();
    void setPGlobalResource(SamiExpressionResource* pGlobal_resource);
    String* getPType();
    void setPType(String* pType);

private:
    SamiExpressionResource* pCheck_value_resource;
SamiExpressionResource* pGlobal_resource;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiGlobalCheckAndIncrementResource_H_ */
