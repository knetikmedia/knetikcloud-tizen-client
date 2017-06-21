/*
 * SamiPageResource«BareChallengeActivityResource».h
 * 
 * 
 */

#ifndef SamiPageResource«BareChallengeActivityResource»_H_
#define SamiPageResource«BareChallengeActivityResource»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBareChallengeActivityResource.h"
#include "SamiOrder.h"
using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;


namespace Swagger {

class SamiPageResource«BareChallengeActivityResource»: public SamiObject {
public:
    SamiPageResource«BareChallengeActivityResource»();
    SamiPageResource«BareChallengeActivityResource»(String* json);
    virtual ~SamiPageResource«BareChallengeActivityResource»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPageResource«BareChallengeActivityResource»* fromJson(String* obj);

    IList* getPContent();
    void setPContent(IList* pContent);
    Boolean* getPFirst();
    void setPFirst(Boolean* pFirst);
    Boolean* getPLast();
    void setPLast(Boolean* pLast);
    Integer* getPNumber();
    void setPNumber(Integer* pNumber);
    Integer* getPNumberOfElements();
    void setPNumberOfElements(Integer* pNumber_of_elements);
    Integer* getPSize();
    void setPSize(Integer* pSize);
    IList* getPSort();
    void setPSort(IList* pSort);
    Long* getPTotalElements();
    void setPTotalElements(Long* pTotal_elements);
    Integer* getPTotalPages();
    void setPTotalPages(Integer* pTotal_pages);

private:
    IList* pContent;
Boolean* pFirst;
Boolean* pLast;
Integer* pNumber;
Integer* pNumber_of_elements;
Integer* pSize;
IList* pSort;
Long* pTotal_elements;
Integer* pTotal_pages;
};

} /* namespace Swagger */

#endif /* SamiPageResource«BareChallengeActivityResource»_H_ */
