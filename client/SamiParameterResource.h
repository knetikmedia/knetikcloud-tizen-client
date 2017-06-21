/*
 * SamiParameterResource.h
 * 
 * 
 */

#ifndef SamiParameterResource_H_
#define SamiParameterResource_H_

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

class SamiParameterResource: public SamiObject {
public:
    SamiParameterResource();
    SamiParameterResource(String* json);
    virtual ~SamiParameterResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiParameterResource* fromJson(String* obj);

    String* getPOf();
    void setPOf(String* pOf);
    String* getPType();
    void setPType(String* pType);
    SamiObject* getPValue();
    void setPValue(SamiObject* pValue);

private:
    String* pOf;
String* pType;
SamiObject* pValue;
};

} /* namespace Swagger */

#endif /* SamiParameterResource_H_ */
