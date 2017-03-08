/*
 * SamiLevelingResource.h
 * 
 * 
 */

#ifndef SamiLevelingResource_H_
#define SamiLevelingResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiProperty.h"
#include "SamiTierResource.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiLevelingResource: public SamiObject {
public:
    SamiLevelingResource();
    SamiLevelingResource(String* json);
    virtual ~SamiLevelingResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLevelingResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPName();
    void setPName(String* pName);
    IList* getPTiers();
    void setPTiers(IList* pTiers);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    HashMap* pAdditional_properties;
Long* pCreated_date;
String* pDescription;
String* pName;
IList* pTiers;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiLevelingResource_H_ */
