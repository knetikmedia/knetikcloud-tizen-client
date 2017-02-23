/*
 * SamiTierResource.h
 * 
 * 
 */

#ifndef SamiTierResource_H_
#define SamiTierResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiTierResource: public SamiObject {
public:
    SamiTierResource();
    SamiTierResource(String* json);
    virtual ~SamiTierResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTierResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPName();
    void setPName(String* pName);
    Integer* getPRequiredProgress();
    void setPRequiredProgress(Integer* pRequired_progress);
    String* getPTriggerEventName();
    void setPTriggerEventName(String* pTrigger_event_name);

private:
    HashMap* pAdditional_properties;
String* pName;
Integer* pRequired_progress;
String* pTrigger_event_name;
};

} /* namespace Swagger */

#endif /* SamiTierResource_H_ */
