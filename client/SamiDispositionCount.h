/*
 * SamiDispositionCount.h
 * 
 * 
 */

#ifndef SamiDispositionCount_H_
#define SamiDispositionCount_H_

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

class SamiDispositionCount: public SamiObject {
public:
    SamiDispositionCount();
    SamiDispositionCount(String* json);
    virtual ~SamiDispositionCount();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDispositionCount* fromJson(String* obj);

    Long* getPCount();
    void setPCount(Long* pCount);
    String* getPName();
    void setPName(String* pName);

private:
    Long* pCount;
String* pName;
};

} /* namespace Swagger */

#endif /* SamiDispositionCount_H_ */
