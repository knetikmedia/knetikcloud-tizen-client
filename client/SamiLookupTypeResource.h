/*
 * SamiLookupTypeResource.h
 * 
 * 
 */

#ifndef SamiLookupTypeResource_H_
#define SamiLookupTypeResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiLookupTypeResource: public SamiObject {
public:
    SamiLookupTypeResource();
    SamiLookupTypeResource(String* json);
    virtual ~SamiLookupTypeResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLookupTypeResource* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPKeyType();
    void setPKeyType(String* pKey_type);
    String* getPName();
    void setPName(String* pName);
    String* getPValueType();
    void setPValueType(String* pValue_type);

private:
    String* pDescription;
String* pKey_type;
String* pName;
String* pValue_type;
};

} /* namespace Swagger */

#endif /* SamiLookupTypeResource_H_ */
