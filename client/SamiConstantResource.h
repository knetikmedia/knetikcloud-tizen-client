/*
 * SamiConstantResource.h
 * 
 * 
 */

#ifndef SamiConstantResource_H_
#define SamiConstantResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiObject.h"
using Tizen::Base::String;


namespace Swagger {

class SamiConstantResource: public SamiObject {
public:
    SamiConstantResource();
    SamiConstantResource(String* json);
    virtual ~SamiConstantResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConstantResource* fromJson(String* obj);

    String* getPType();
    void setPType(String* pType);
    SamiObject* getPValue();
    void setPValue(SamiObject* pValue);
    String* getPValueType();
    void setPValueType(String* pValue_type);

private:
    String* pType;
SamiObject* pValue;
String* pValue_type;
};

} /* namespace Swagger */

#endif /* SamiConstantResource_H_ */
