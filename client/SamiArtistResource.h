/*
 * SamiArtistResource.h
 * 
 * 
 */

#ifndef SamiArtistResource_H_
#define SamiArtistResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiContributionResource.h"
#include "SamiProperty.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiArtistResource: public SamiObject {
public:
    SamiArtistResource();
    SamiArtistResource(String* json);
    virtual ~SamiArtistResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiArtistResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    String* getPBorn();
    void setPBorn(String* pBorn);
    Integer* getPContributionCount();
    void setPContributionCount(Integer* pContribution_count);
    IList* getPContributions();
    void setPContributions(IList* pContributions);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPDied();
    void setPDied(String* pDied);
    Long* getPId();
    void setPId(Long* pId);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    String* getPName();
    void setPName(String* pName);
    Integer* getPPriority();
    void setPPriority(Integer* pPriority);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    HashMap* pAdditional_properties;
String* pBorn;
Integer* pContribution_count;
IList* pContributions;
Long* pCreated_date;
String* pDied;
Long* pId;
String* pLong_description;
String* pName;
Integer* pPriority;
String* pShort_description;
String* pTemplate;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiArtistResource_H_ */
