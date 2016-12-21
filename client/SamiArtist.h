/*
 * SamiArtist.h
 * 
 * 
 */

#ifndef SamiArtist_H_
#define SamiArtist_H_

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
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiArtist: public SamiObject {
public:
    SamiArtist();
    SamiArtist(String* json);
    virtual ~SamiArtist();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiArtist* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    Long* getPBorn();
    void setPBorn(Long* pBorn);
    Integer* getPContributionCount();
    void setPContributionCount(Integer* pContribution_count);
    Long* getPCreated();
    void setPCreated(Long* pCreated);
    Long* getPDied();
    void setPDied(Long* pDied);
    Long* getPId();
    void setPId(Long* pId);
    String* getPLongDescription();
    void setPLongDescription(String* pLong_description);
    String* getPName();
    void setPName(String* pName);
    Integer* getPPriority();
    void setPPriority(Integer* pPriority);
    String* getPPropertiesString();
    void setPPropertiesString(String* pProperties_string);
    String* getPShortDescription();
    void setPShortDescription(String* pShort_description);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    Long* getPUpdated();
    void setPUpdated(Long* pUpdated);

private:
    HashMap* pAdditional_properties;
Long* pBorn;
Integer* pContribution_count;
Long* pCreated;
Long* pDied;
Long* pId;
String* pLong_description;
String* pName;
Integer* pPriority;
String* pProperties_string;
String* pShort_description;
String* pTemplate;
Long* pUpdated;
};

} /* namespace Swagger */

#endif /* SamiArtist_H_ */
