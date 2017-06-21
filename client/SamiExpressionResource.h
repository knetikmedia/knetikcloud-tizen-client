/*
 * SamiExpressionResource.h
 * 
 * 
 */

#ifndef SamiExpressionResource_H_
#define SamiExpressionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiExpressionResource: public SamiObject {
public:
    SamiExpressionResource();
    SamiExpressionResource(String* json);
    virtual ~SamiExpressionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiExpressionResource* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);

private:
    String* pType;
};

} /* namespace Swagger */

#endif /* SamiExpressionResource_H_ */
