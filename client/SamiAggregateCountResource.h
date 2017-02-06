/*
 * SamiAggregateCountResource.h
 * 
 * 
 */

#ifndef SamiAggregateCountResource_H_
#define SamiAggregateCountResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiAggregateCountResource: public SamiObject {
public:
    SamiAggregateCountResource();
    SamiAggregateCountResource(String* json);
    virtual ~SamiAggregateCountResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAggregateCountResource* fromJson(String* obj);

    Long* getPCount();
    void setPCount(Long* pCount);
    String* getPDate();
    void setPDate(String* pDate);

private:
    Long* pCount;
String* pDate;
};

} /* namespace Swagger */

#endif /* SamiAggregateCountResource_H_ */
