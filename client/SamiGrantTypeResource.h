/*
 * SamiGrantTypeResource.h
 * 
 * 
 */

#ifndef SamiGrantTypeResource_H_
#define SamiGrantTypeResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiGrantTypeResource: public SamiObject {
public:
    SamiGrantTypeResource();
    SamiGrantTypeResource(String* json);
    virtual ~SamiGrantTypeResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiGrantTypeResource* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPName();
    void setPName(String* pName);

private:
    String* pDescription;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiGrantTypeResource_H_ */
